#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)96;
unsigned int var_6 = 4125943102U;
unsigned short var_7 = (unsigned short)49445;
unsigned int var_11 = 2553217400U;
int var_14 = -771957159;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -4330750054857099265LL;
unsigned int var_18 = 574171831U;
signed char var_19 = (signed char)-10;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
