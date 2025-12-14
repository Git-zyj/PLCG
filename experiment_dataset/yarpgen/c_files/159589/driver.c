#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)147;
_Bool var_7 = (_Bool)0;
short var_8 = (short)-23209;
int zero = 0;
long long int var_10 = -3608460843131161979LL;
unsigned short var_11 = (unsigned short)33186;
unsigned char var_12 = (unsigned char)45;
int var_13 = -1618735852;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
