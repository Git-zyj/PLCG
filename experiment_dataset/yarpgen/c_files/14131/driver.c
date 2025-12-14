#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)104;
unsigned long long int var_2 = 12365153942813347413ULL;
signed char var_3 = (signed char)-70;
long long int var_6 = 703748974095654246LL;
signed char var_7 = (signed char)19;
short var_8 = (short)-12769;
signed char var_10 = (signed char)-12;
signed char var_12 = (signed char)-46;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 6037613074650639296ULL;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
int var_17 = 502396145;
int zero = 0;
short var_19 = (short)9340;
unsigned short var_20 = (unsigned short)16057;
unsigned char var_21 = (unsigned char)232;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
