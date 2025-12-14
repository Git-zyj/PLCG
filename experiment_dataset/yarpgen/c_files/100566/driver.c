#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-100;
unsigned int var_3 = 2461037382U;
short var_7 = (short)24275;
unsigned int var_10 = 3770725214U;
int var_11 = -1988308649;
unsigned short var_12 = (unsigned short)44709;
unsigned int var_13 = 3236414058U;
short var_14 = (short)29113;
int zero = 0;
signed char var_19 = (signed char)-92;
int var_20 = 540344901;
void init() {
}

void checksum() {
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
