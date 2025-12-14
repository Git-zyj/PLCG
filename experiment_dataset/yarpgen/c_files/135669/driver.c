#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)10615;
unsigned char var_6 = (unsigned char)186;
unsigned int var_11 = 3365831689U;
unsigned long long int var_12 = 1842120550627210253ULL;
short var_13 = (short)-9017;
int zero = 0;
unsigned long long int var_15 = 2075504662895848976ULL;
unsigned int var_16 = 2993424416U;
unsigned int var_17 = 1776676211U;
signed char var_18 = (signed char)111;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
