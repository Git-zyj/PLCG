#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40404;
unsigned short var_6 = (unsigned short)2315;
long long int var_10 = -4932532273546146905LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_15 = -4061881491106325609LL;
int var_16 = 490986495;
int var_17 = 2125262307;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
