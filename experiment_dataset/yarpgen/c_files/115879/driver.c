#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
int var_10 = -1387867052;
long long int var_11 = -8013636270828379205LL;
short var_14 = (short)-25795;
signed char var_15 = (signed char)85;
int zero = 0;
unsigned short var_17 = (unsigned short)49970;
unsigned short var_18 = (unsigned short)36750;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
