#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)29526;
unsigned char var_4 = (unsigned char)41;
unsigned long long int var_7 = 11748566407568533266ULL;
unsigned char var_8 = (unsigned char)74;
_Bool var_10 = (_Bool)0;
short var_11 = (short)30396;
unsigned int var_12 = 1908610622U;
unsigned long long int var_13 = 477245451397347573ULL;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)130;
void init() {
}

void checksum() {
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
