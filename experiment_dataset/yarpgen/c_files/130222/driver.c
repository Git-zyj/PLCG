#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)132;
signed char var_4 = (signed char)-33;
unsigned short var_6 = (unsigned short)28905;
short var_7 = (short)904;
int var_8 = -1031970369;
_Bool var_9 = (_Bool)0;
int var_10 = -597789750;
unsigned short var_12 = (unsigned short)4622;
int zero = 0;
unsigned long long int var_14 = 1498565492471471693ULL;
unsigned char var_15 = (unsigned char)239;
unsigned char var_16 = (unsigned char)72;
unsigned char var_17 = (unsigned char)48;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
