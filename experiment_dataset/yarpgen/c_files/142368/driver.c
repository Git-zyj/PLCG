#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2807195376717678809LL;
signed char var_4 = (signed char)70;
long long int var_5 = -4467736393357081324LL;
unsigned int var_15 = 522210381U;
int zero = 0;
long long int var_16 = -3406462464611814120LL;
unsigned short var_17 = (unsigned short)10890;
void init() {
}

void checksum() {
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
