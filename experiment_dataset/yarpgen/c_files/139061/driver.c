#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)12;
signed char var_2 = (signed char)91;
int var_3 = -1835818739;
unsigned short var_9 = (unsigned short)62805;
long long int var_14 = -200391621648968264LL;
long long int var_16 = -5176257708468358323LL;
unsigned char var_17 = (unsigned char)254;
int zero = 0;
unsigned char var_18 = (unsigned char)242;
long long int var_19 = -5363605893779238365LL;
unsigned int var_20 = 3428451923U;
short var_21 = (short)-13957;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
