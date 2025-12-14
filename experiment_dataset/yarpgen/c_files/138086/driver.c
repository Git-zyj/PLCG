#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1689706185;
unsigned short var_4 = (unsigned short)10855;
int var_5 = -1636985259;
int var_7 = -62909858;
int var_9 = 1555024368;
unsigned int var_12 = 2830597087U;
unsigned int var_16 = 3921964191U;
unsigned short var_17 = (unsigned short)21791;
int zero = 0;
unsigned short var_18 = (unsigned short)45661;
signed char var_19 = (signed char)101;
signed char var_20 = (signed char)88;
int var_21 = 1124718857;
unsigned int var_22 = 2461809892U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
