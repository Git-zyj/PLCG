#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61553;
long long int var_2 = 1900882221000261252LL;
short var_3 = (short)29602;
unsigned long long int var_5 = 9078059538654434401ULL;
short var_6 = (short)-21252;
_Bool var_8 = (_Bool)1;
short var_13 = (short)-26022;
unsigned char var_18 = (unsigned char)166;
int zero = 0;
unsigned int var_20 = 73234183U;
long long int var_21 = 6005415799843332333LL;
unsigned char var_22 = (unsigned char)179;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
