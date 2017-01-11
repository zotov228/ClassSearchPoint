// SearchPoint.cpp: определяет точку входа для консольного приложения.
//
/*
**************************************
7.	Постройте параллелограмм, если известно, что некоторые три его вершины расположены в точках
(x1, y1), (x2, y2) и (x3, y3). Предусмотрите все возможные варианты расположения фигуры.
******************************************
*/

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Rectangle //класс для точки
{
private:
	double x1, y1, x2, y2, x3, y3, x4, y4; //координаты точки
public:
	void getONE() {
		std::cout << "Enter point ONE:";
		std::cin >> x1 >> y1;
	}
	void getTWO() {
		std::cout << "Enter point TWO:";
		std::cin >> x2 >> y2;
	}
	void getTREE() {
		std::cout << "Enter point TREE:";
		std::cin >> x3 >> y3;
	}
	void searchF() {
		if ((x2 - x1)*(x3 - x1) + (y2 - y1)*(y3 - y1) == 0) {
			x4 = x3 + x2 - x1;
			y4 = y3 + y2 - y1;
		}
		else if ((x1 - x2)*(x3 - x2) + (y1 - y2)*(y3 - y2) == 0) {
			x4 = x3 + x1 - x2;
			y4 = y3 + y1 - y1;
		}
		else if ((x1 - x3)*(x2 - x3) + (y1 - y3)*(y2 - y3) == 0) {
			x4 = x2 + x1 - x3;
			y4 = y2 + y1 - y3;
		}
		else {
			std::cout << "The points do not correspond to the rectangle!";
		}
		std::cout << "The points x4 and y4: " << x4 << "  " << y4 << '\n';
	}
};


int main()
{
	Rectangle rec;
	rec.getONE();
	rec.getTWO();
	rec.getTREE();
	rec.searchF();
	system("pause");
	return 0;
}

