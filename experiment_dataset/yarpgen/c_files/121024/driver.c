#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-33;
unsigned short var_6 = (unsigned short)65409;
short var_8 = (short)28268;
unsigned char var_11 = (unsigned char)249;
unsigned char var_12 = (unsigned char)239;
int var_14 = -2127742874;
int zero = 0;
unsigned int var_16 = 930813881U;
unsigned short var_17 = (unsigned short)57774;
unsigned char var_18 = (unsigned char)76;
void init() {
}

void checksum() {
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
