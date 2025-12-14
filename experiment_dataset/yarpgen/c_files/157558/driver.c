#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 85483227644477404ULL;
int var_6 = 1389513311;
int var_10 = -254035157;
int var_13 = -1918352835;
int zero = 0;
unsigned long long int var_16 = 9785794416505368635ULL;
unsigned int var_17 = 3166822933U;
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
