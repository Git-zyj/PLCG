#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)139;
signed char var_1 = (signed char)-65;
unsigned short var_2 = (unsigned short)18686;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)6;
unsigned char var_5 = (unsigned char)232;
unsigned int var_6 = 2495452586U;
unsigned short var_7 = (unsigned short)64112;
unsigned long long int var_8 = 15843846618209093446ULL;
unsigned long long int var_10 = 3714624368076849559ULL;
unsigned short var_11 = (unsigned short)41642;
unsigned int var_12 = 4170287956U;
int zero = 0;
unsigned long long int var_13 = 13996653731875049839ULL;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)255;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
