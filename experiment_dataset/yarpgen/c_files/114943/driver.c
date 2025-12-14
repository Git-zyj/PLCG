#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3891791529U;
unsigned long long int var_3 = 17199730897619167501ULL;
signed char var_5 = (signed char)-118;
short var_6 = (short)-14317;
int var_7 = -989158531;
long long int var_8 = -1141742227652787969LL;
signed char var_12 = (signed char)-64;
signed char var_14 = (signed char)7;
long long int var_17 = 7759301752974705178LL;
int zero = 0;
unsigned int var_19 = 4138558374U;
unsigned char var_20 = (unsigned char)87;
unsigned int var_21 = 3058834313U;
void init() {
}

void checksum() {
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
