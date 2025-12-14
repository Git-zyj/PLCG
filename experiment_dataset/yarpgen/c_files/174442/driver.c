#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)6;
unsigned long long int var_2 = 5582546523139806303ULL;
int var_4 = 616656201;
signed char var_6 = (signed char)-115;
short var_7 = (short)2430;
unsigned char var_8 = (unsigned char)176;
int var_9 = -1785602673;
unsigned int var_10 = 60699239U;
signed char var_11 = (signed char)37;
unsigned int var_13 = 2736470835U;
int var_14 = 531536462;
int var_16 = -564615584;
int var_19 = 1472199782;
int zero = 0;
unsigned int var_20 = 4234581741U;
unsigned char var_21 = (unsigned char)42;
unsigned char var_22 = (unsigned char)86;
void init() {
}

void checksum() {
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
