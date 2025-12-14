#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15279;
long long int var_2 = 3993229499452275469LL;
long long int var_8 = 1104049404667773112LL;
unsigned long long int var_12 = 6765748303187926334ULL;
unsigned long long int var_13 = 14725778994961244026ULL;
int zero = 0;
short var_14 = (short)-14302;
_Bool var_15 = (_Bool)0;
long long int var_16 = -6623283791639968616LL;
signed char var_17 = (signed char)16;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
