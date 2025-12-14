#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)224;
int var_5 = 1659026659;
signed char var_6 = (signed char)17;
unsigned int var_9 = 671303469U;
signed char var_15 = (signed char)-23;
int zero = 0;
unsigned long long int var_16 = 9165842934041673290ULL;
signed char var_17 = (signed char)71;
unsigned int var_18 = 858514483U;
signed char var_19 = (signed char)-52;
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
