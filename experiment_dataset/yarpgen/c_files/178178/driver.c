#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1491722825;
signed char var_10 = (signed char)-16;
short var_11 = (short)979;
signed char var_12 = (signed char)-2;
short var_13 = (short)-2149;
unsigned int var_15 = 1822739339U;
int zero = 0;
unsigned char var_19 = (unsigned char)247;
short var_20 = (short)-28312;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
