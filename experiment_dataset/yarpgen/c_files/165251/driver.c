#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 961712024;
unsigned short var_2 = (unsigned short)64945;
unsigned int var_3 = 29609770U;
unsigned char var_4 = (unsigned char)14;
unsigned long long int var_9 = 18387780757248797074ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)71;
int var_11 = 202018773;
short var_12 = (short)-9745;
unsigned int var_13 = 1646893068U;
int var_14 = -1139883373;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
