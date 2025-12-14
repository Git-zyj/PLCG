#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1934583045;
unsigned short var_1 = (unsigned short)49421;
_Bool var_5 = (_Bool)1;
unsigned int var_8 = 1118326351U;
unsigned char var_10 = (unsigned char)11;
short var_13 = (short)31365;
short var_14 = (short)-15311;
int zero = 0;
unsigned int var_15 = 251342056U;
long long int var_16 = 42283887480070726LL;
long long int var_17 = -9098074047078431846LL;
signed char var_18 = (signed char)-69;
void init() {
}

void checksum() {
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
