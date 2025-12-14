#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 2227647764583589100ULL;
unsigned short var_7 = (unsigned short)22808;
unsigned int var_8 = 1194367943U;
unsigned short var_11 = (unsigned short)30629;
int zero = 0;
int var_15 = -328250919;
unsigned short var_16 = (unsigned short)9718;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 14735971762489976363ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
