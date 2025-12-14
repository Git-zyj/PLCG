#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1931217485U;
int var_5 = -636359679;
unsigned int var_6 = 500053350U;
long long int var_7 = 513595135731670296LL;
signed char var_10 = (signed char)-84;
unsigned int var_11 = 3025528905U;
int var_12 = -1429620709;
int zero = 0;
unsigned short var_14 = (unsigned short)775;
int var_15 = 1256576115;
unsigned char var_16 = (unsigned char)48;
unsigned int var_17 = 2084715536U;
unsigned long long int var_18 = 1651652132107377896ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
