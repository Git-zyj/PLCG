#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = 3553454091560397572LL;
unsigned char var_3 = (unsigned char)199;
_Bool var_4 = (_Bool)0;
short var_9 = (short)10890;
int zero = 0;
unsigned long long int var_10 = 10551864869756232409ULL;
unsigned char var_11 = (unsigned char)113;
unsigned char var_12 = (unsigned char)42;
short var_13 = (short)-2715;
long long int var_14 = -2693775695074384810LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
