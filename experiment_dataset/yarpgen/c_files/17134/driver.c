#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -326701822;
_Bool var_5 = (_Bool)1;
short var_7 = (short)-30467;
unsigned short var_8 = (unsigned short)45332;
unsigned int var_10 = 1701924233U;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)7574;
unsigned int var_14 = 1032369660U;
unsigned int var_15 = 4150234693U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
