#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)174;
int var_4 = 365632283;
unsigned int var_10 = 671047364U;
unsigned char var_12 = (unsigned char)33;
int var_17 = 1199630212;
int zero = 0;
unsigned long long int var_18 = 14599845778845482040ULL;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1333444988U;
int var_21 = -1554173771;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
