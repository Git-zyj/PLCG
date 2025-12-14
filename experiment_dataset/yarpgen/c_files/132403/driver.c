#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4697914374024220274ULL;
int var_5 = -1450242716;
unsigned long long int var_13 = 3659831151299616766ULL;
unsigned long long int var_15 = 5495160241379595952ULL;
int var_17 = -1481927976;
int zero = 0;
long long int var_19 = -2498979481091057690LL;
short var_20 = (short)-17443;
unsigned long long int var_21 = 5957208563064821152ULL;
unsigned long long int var_22 = 1768813692221105813ULL;
void init() {
}

void checksum() {
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
