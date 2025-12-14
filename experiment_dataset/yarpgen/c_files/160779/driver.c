#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)14;
unsigned long long int var_3 = 6075340933980091995ULL;
unsigned long long int var_6 = 6204173158455400839ULL;
unsigned int var_9 = 421930733U;
unsigned long long int var_16 = 7694303681222722752ULL;
short var_17 = (short)-8418;
int zero = 0;
unsigned char var_20 = (unsigned char)62;
unsigned short var_21 = (unsigned short)7312;
int var_22 = -842036721;
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
