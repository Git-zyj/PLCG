#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1346415743U;
signed char var_1 = (signed char)6;
short var_4 = (short)-7183;
unsigned char var_8 = (unsigned char)135;
unsigned int var_9 = 3195900956U;
unsigned int var_10 = 2102907316U;
unsigned int var_15 = 2600616338U;
short var_16 = (short)-16514;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)67;
signed char var_21 = (signed char)(-127 - 1);
signed char var_22 = (signed char)93;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
