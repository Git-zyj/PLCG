#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)160;
signed char var_10 = (signed char)108;
unsigned long long int var_11 = 9376346061863107191ULL;
int zero = 0;
signed char var_14 = (signed char)-25;
unsigned int var_15 = 914060236U;
unsigned int var_16 = 857296635U;
signed char var_17 = (signed char)-59;
short var_18 = (short)14570;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
