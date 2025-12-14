#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2859545628U;
short var_1 = (short)-8282;
unsigned int var_2 = 2697328972U;
short var_3 = (short)-30709;
short var_4 = (short)-12872;
_Bool var_5 = (_Bool)0;
long long int var_6 = 3670483124437954148LL;
unsigned char var_7 = (unsigned char)116;
unsigned long long int var_8 = 11760377369791605311ULL;
unsigned short var_9 = (unsigned short)17874;
unsigned short var_10 = (unsigned short)47771;
int zero = 0;
unsigned short var_11 = (unsigned short)23872;
short var_12 = (short)30163;
unsigned int var_13 = 302781183U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
