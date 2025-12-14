#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)42747;
unsigned short var_2 = (unsigned short)57412;
unsigned short var_5 = (unsigned short)13586;
unsigned short var_9 = (unsigned short)51791;
int zero = 0;
short var_11 = (short)-9081;
unsigned int var_12 = 1140094416U;
unsigned long long int var_13 = 7022829059821503994ULL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 7082748853964767824ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
