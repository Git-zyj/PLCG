#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1435991083U;
signed char var_6 = (signed char)-70;
signed char var_7 = (signed char)-124;
_Bool var_12 = (_Bool)1;
int var_15 = 511627429;
signed char var_16 = (signed char)60;
short var_17 = (short)-24629;
int var_18 = 1919135502;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)51;
int var_21 = -753802766;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
