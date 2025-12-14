#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1582683280;
unsigned long long int var_4 = 12859816827191209381ULL;
unsigned long long int var_5 = 10138533008204287190ULL;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 2255714039U;
unsigned long long int var_11 = 17935871021808106370ULL;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1732227566U;
unsigned char var_19 = (unsigned char)4;
int zero = 0;
unsigned int var_20 = 3810049194U;
unsigned short var_21 = (unsigned short)30393;
unsigned int var_22 = 4224437025U;
int var_23 = 1175901427;
unsigned char var_24 = (unsigned char)144;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
