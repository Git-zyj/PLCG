#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1590436921;
unsigned int var_2 = 2388916030U;
unsigned char var_3 = (unsigned char)61;
unsigned int var_8 = 4237415783U;
long long int var_11 = -2708000152177058457LL;
int zero = 0;
unsigned char var_15 = (unsigned char)100;
unsigned int var_16 = 3041150672U;
int var_17 = -334335018;
void init() {
}

void checksum() {
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
