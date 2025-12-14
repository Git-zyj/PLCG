#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1148036792;
unsigned long long int var_1 = 6448792434167985858ULL;
long long int var_4 = 1067965518967554131LL;
signed char var_6 = (signed char)79;
signed char var_11 = (signed char)-15;
int var_13 = -668098074;
short var_15 = (short)-21419;
int zero = 0;
long long int var_16 = 7557489059856462805LL;
long long int var_17 = -5736060004670587865LL;
unsigned long long int var_18 = 17648698084453428499ULL;
signed char var_19 = (signed char)-114;
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
