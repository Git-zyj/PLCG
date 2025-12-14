#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47126;
unsigned int var_3 = 3141267887U;
unsigned int var_4 = 558188276U;
unsigned short var_5 = (unsigned short)7232;
unsigned short var_7 = (unsigned short)6234;
long long int var_8 = -227631381305560644LL;
unsigned long long int var_10 = 4350674205424295195ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)27549;
int var_12 = -313164133;
unsigned char var_13 = (unsigned char)60;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)49;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
