#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2610622571U;
_Bool var_1 = (_Bool)1;
signed char var_4 = (signed char)125;
unsigned short var_6 = (unsigned short)30463;
short var_11 = (short)-32201;
int zero = 0;
int var_14 = 1570501235;
_Bool var_15 = (_Bool)1;
int var_16 = -152856333;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
