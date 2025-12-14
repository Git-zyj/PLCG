#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-9626;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)16732;
short var_12 = (short)-20806;
signed char var_14 = (signed char)42;
unsigned char var_15 = (unsigned char)12;
int zero = 0;
unsigned char var_17 = (unsigned char)50;
unsigned int var_18 = 609997906U;
int var_19 = -196691031;
int var_20 = -415040324;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
