#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)18870;
unsigned long long int var_4 = 3892449439286334830ULL;
unsigned long long int var_7 = 13408572704980785901ULL;
unsigned long long int var_8 = 14667780615638718295ULL;
unsigned short var_9 = (unsigned short)52571;
unsigned long long int var_10 = 7500768051638135725ULL;
unsigned char var_11 = (unsigned char)51;
int zero = 0;
unsigned long long int var_12 = 3938459603737861118ULL;
unsigned short var_13 = (unsigned short)17959;
unsigned long long int var_14 = 16528856858454036902ULL;
unsigned short var_15 = (unsigned short)2827;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
