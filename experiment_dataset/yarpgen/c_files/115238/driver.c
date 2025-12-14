#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)16534;
unsigned char var_4 = (unsigned char)97;
unsigned int var_10 = 2831605994U;
signed char var_12 = (signed char)61;
signed char var_15 = (signed char)103;
int zero = 0;
short var_17 = (short)11287;
signed char var_18 = (signed char)6;
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
