#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9932;
short var_1 = (short)22947;
int var_2 = 1957112069;
int var_5 = 1717026038;
signed char var_8 = (signed char)29;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)65;
int zero = 0;
unsigned long long int var_13 = 2169921149601824959ULL;
unsigned int var_14 = 2119113792U;
short var_15 = (short)-30667;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
