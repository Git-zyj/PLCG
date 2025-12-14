#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33122;
unsigned char var_3 = (unsigned char)240;
unsigned char var_6 = (unsigned char)107;
int var_7 = -752719136;
unsigned short var_11 = (unsigned short)34551;
unsigned int var_12 = 60658272U;
int var_15 = 365507154;
int var_17 = -1120882084;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)166;
unsigned int var_20 = 2191049458U;
long long int var_21 = -4529752101015295992LL;
signed char var_22 = (signed char)125;
short var_23 = (short)-13896;
void init() {
}

void checksum() {
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
