#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)232;
unsigned char var_5 = (unsigned char)73;
int var_8 = -1784162137;
unsigned short var_9 = (unsigned short)30964;
int zero = 0;
int var_12 = -1787769276;
int var_13 = 1283752923;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
