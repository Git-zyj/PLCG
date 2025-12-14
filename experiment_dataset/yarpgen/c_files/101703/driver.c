#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 13539670844493667937ULL;
unsigned int var_7 = 3752231873U;
unsigned long long int var_10 = 430673427242170485ULL;
unsigned long long int var_12 = 4115770743245005087ULL;
long long int var_13 = 2532366646486896468LL;
long long int var_17 = -8261109616731434222LL;
int zero = 0;
short var_18 = (short)-173;
unsigned int var_19 = 2353799478U;
int var_20 = -708327028;
int var_21 = 1571970648;
unsigned char var_22 = (unsigned char)171;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
