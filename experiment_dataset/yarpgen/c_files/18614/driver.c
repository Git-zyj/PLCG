#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)162;
signed char var_8 = (signed char)-48;
short var_13 = (short)3523;
unsigned char var_14 = (unsigned char)158;
long long int var_15 = -913278680257070401LL;
int zero = 0;
unsigned long long int var_18 = 15898363613014466885ULL;
unsigned short var_19 = (unsigned short)42568;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-7871;
unsigned long long int var_22 = 11564125935898703075ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
