#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8330387509778974165LL;
unsigned char var_1 = (unsigned char)54;
int var_2 = -48733714;
unsigned long long int var_10 = 14729075144849633711ULL;
long long int var_11 = 1666609174659218960LL;
int zero = 0;
signed char var_15 = (signed char)51;
unsigned long long int var_16 = 11274631036151955505ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
