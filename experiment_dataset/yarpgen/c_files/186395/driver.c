#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)40;
long long int var_6 = 1443688889190397409LL;
int var_12 = 1790932639;
long long int var_14 = 4813720542738937363LL;
short var_16 = (short)-17488;
int zero = 0;
unsigned short var_17 = (unsigned short)43082;
unsigned short var_18 = (unsigned short)65437;
unsigned char var_19 = (unsigned char)66;
unsigned char var_20 = (unsigned char)207;
long long int var_21 = 7214118962778069458LL;
int var_22 = 1783800116;
short var_23 = (short)25691;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
