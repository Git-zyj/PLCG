#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -768453303;
unsigned long long int var_2 = 2863696645268229684ULL;
unsigned char var_4 = (unsigned char)229;
unsigned char var_6 = (unsigned char)118;
unsigned char var_7 = (unsigned char)209;
unsigned short var_8 = (unsigned short)22954;
int var_10 = 1897571968;
unsigned int var_12 = 2029947432U;
unsigned int var_14 = 2901328510U;
int zero = 0;
unsigned short var_16 = (unsigned short)42792;
unsigned int var_17 = 2672720047U;
unsigned int var_18 = 4234854793U;
long long int var_19 = -2040072703254688740LL;
short var_20 = (short)31782;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
