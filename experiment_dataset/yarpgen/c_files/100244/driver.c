#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)17620;
unsigned int var_5 = 4186042704U;
short var_6 = (short)-28390;
unsigned char var_8 = (unsigned char)174;
unsigned char var_11 = (unsigned char)250;
unsigned int var_12 = 4033764537U;
_Bool var_13 = (_Bool)0;
unsigned short var_16 = (unsigned short)60229;
unsigned char var_17 = (unsigned char)209;
int zero = 0;
long long int var_20 = -3784887060033585776LL;
long long int var_21 = -2357034646819596412LL;
unsigned long long int var_22 = 6726779534994442962ULL;
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
