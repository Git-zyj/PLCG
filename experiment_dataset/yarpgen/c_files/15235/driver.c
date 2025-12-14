#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 939263042U;
short var_4 = (short)-28195;
int zero = 0;
unsigned long long int var_10 = 8134190619878195164ULL;
unsigned short var_11 = (unsigned short)56597;
unsigned char var_12 = (unsigned char)225;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3479649595U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
