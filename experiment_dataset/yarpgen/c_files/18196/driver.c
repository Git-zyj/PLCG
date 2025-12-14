#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1710779258;
int var_2 = 13998843;
int var_3 = -1388849729;
unsigned long long int var_11 = 15604077733278923078ULL;
unsigned short var_12 = (unsigned short)35738;
unsigned int var_15 = 807158783U;
unsigned int var_17 = 3834137569U;
long long int var_18 = -9114952761742184676LL;
int zero = 0;
unsigned short var_19 = (unsigned short)24710;
_Bool var_20 = (_Bool)0;
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
