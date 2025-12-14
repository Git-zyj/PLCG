#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4073869973U;
unsigned int var_1 = 3080368737U;
unsigned int var_2 = 2812517622U;
unsigned int var_3 = 1336822869U;
unsigned int var_4 = 2321684123U;
unsigned int var_5 = 3402780872U;
unsigned int var_7 = 2025858849U;
unsigned int var_8 = 438924915U;
short var_10 = (short)2913;
unsigned int var_11 = 267026424U;
int zero = 0;
short var_20 = (short)-27551;
unsigned int var_21 = 519226532U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
