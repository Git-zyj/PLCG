#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_3 = (short)2641;
short var_4 = (short)15378;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 1281499222U;
unsigned int var_9 = 3221087976U;
signed char var_10 = (signed char)-70;
long long int var_11 = 6550654524867888553LL;
int zero = 0;
unsigned short var_12 = (unsigned short)60935;
signed char var_13 = (signed char)43;
short var_14 = (short)-13582;
signed char var_15 = (signed char)24;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
