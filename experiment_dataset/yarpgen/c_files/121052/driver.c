#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 14499212671746748063ULL;
unsigned long long int var_11 = 10305859846342236728ULL;
unsigned long long int var_13 = 13865408029176584784ULL;
int zero = 0;
unsigned long long int var_16 = 15171369363939198525ULL;
unsigned long long int var_17 = 16576629795413789642ULL;
long long int var_18 = -7701655143733140850LL;
void init() {
}

void checksum() {
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
