#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_11 = (unsigned char)122;
short var_12 = (short)13334;
unsigned int var_13 = 3242941255U;
long long int var_14 = 3003711994678802547LL;
int zero = 0;
unsigned long long int var_15 = 11234857383471300672ULL;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)87;
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
