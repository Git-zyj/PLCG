#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)1895;
_Bool var_14 = (_Bool)1;
long long int var_16 = -1044894784313787340LL;
int zero = 0;
short var_20 = (short)698;
unsigned long long int var_21 = 14042122044280709011ULL;
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
