#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2439251879U;
signed char var_1 = (signed char)-84;
unsigned long long int var_2 = 1968431239852700203ULL;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned int var_12 = 2877250156U;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1165032786U;
int zero = 0;
unsigned int var_16 = 4205992035U;
unsigned int var_17 = 33114231U;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
