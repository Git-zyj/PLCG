#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
int var_7 = 1669400341;
short var_8 = (short)-10829;
signed char var_10 = (signed char)-4;
unsigned long long int var_11 = 926845215164041809ULL;
int zero = 0;
unsigned int var_13 = 578329713U;
short var_14 = (short)14257;
unsigned int var_15 = 2553721872U;
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
