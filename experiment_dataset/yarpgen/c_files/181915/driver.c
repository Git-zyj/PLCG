#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11978041965557046226ULL;
unsigned int var_3 = 2402296000U;
signed char var_4 = (signed char)-100;
signed char var_12 = (signed char)73;
int zero = 0;
unsigned short var_16 = (unsigned short)33940;
short var_17 = (short)22039;
unsigned int var_18 = 1468685938U;
signed char var_19 = (signed char)-63;
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
