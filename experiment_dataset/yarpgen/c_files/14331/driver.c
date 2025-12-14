#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3687534815U;
unsigned int var_4 = 2272792783U;
unsigned long long int var_5 = 5611882462155086660ULL;
unsigned char var_7 = (unsigned char)148;
unsigned int var_8 = 3757985264U;
unsigned char var_9 = (unsigned char)200;
unsigned int var_11 = 3135751617U;
int zero = 0;
unsigned char var_13 = (unsigned char)122;
signed char var_14 = (signed char)80;
unsigned long long int var_15 = 9361766371142864502ULL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
