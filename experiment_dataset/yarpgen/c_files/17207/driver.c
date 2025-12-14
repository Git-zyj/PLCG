#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3505047072U;
short var_6 = (short)-8356;
signed char var_7 = (signed char)122;
int zero = 0;
int var_17 = 1213072023;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 680947177U;
unsigned int var_20 = 3012435438U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
