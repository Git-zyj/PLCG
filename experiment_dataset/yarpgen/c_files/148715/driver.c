#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)84;
_Bool var_3 = (_Bool)0;
unsigned char var_6 = (unsigned char)203;
int var_10 = 98347586;
unsigned char var_11 = (unsigned char)243;
unsigned short var_12 = (unsigned short)48149;
int zero = 0;
unsigned short var_13 = (unsigned short)28493;
unsigned char var_14 = (unsigned char)168;
unsigned short var_15 = (unsigned short)21916;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
