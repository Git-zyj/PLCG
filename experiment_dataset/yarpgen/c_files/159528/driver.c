#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57128;
unsigned short var_2 = (unsigned short)64206;
unsigned int var_7 = 1315615388U;
signed char var_11 = (signed char)84;
unsigned int var_12 = 2180913502U;
unsigned int var_15 = 2235853269U;
unsigned long long int var_16 = 8341458895248639756ULL;
int zero = 0;
short var_19 = (short)-8772;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
