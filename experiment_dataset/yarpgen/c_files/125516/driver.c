#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 458087290U;
int var_3 = -132307052;
unsigned long long int var_6 = 7607295156532470378ULL;
unsigned char var_16 = (unsigned char)88;
int zero = 0;
unsigned char var_17 = (unsigned char)132;
unsigned char var_18 = (unsigned char)73;
unsigned long long int var_19 = 11108976732921416977ULL;
void init() {
}

void checksum() {
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
