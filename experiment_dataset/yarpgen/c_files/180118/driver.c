#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)51;
signed char var_6 = (signed char)85;
signed char var_8 = (signed char)-7;
int var_9 = -84747934;
long long int var_11 = -5928144035634614630LL;
int zero = 0;
int var_12 = -835811556;
unsigned int var_13 = 2367491662U;
signed char var_14 = (signed char)-40;
unsigned int var_15 = 1672810575U;
unsigned char var_16 = (unsigned char)168;
signed char var_17 = (signed char)59;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
