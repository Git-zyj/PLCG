#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_4 = 3448804216U;
unsigned short var_15 = (unsigned short)3213;
unsigned long long int var_16 = 11723716172980174038ULL;
int zero = 0;
long long int var_17 = 3727778209345472656LL;
unsigned short var_18 = (unsigned short)22471;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
