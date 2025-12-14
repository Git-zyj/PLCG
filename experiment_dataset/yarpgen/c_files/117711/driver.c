#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -362212531;
int var_5 = -1189969985;
unsigned long long int var_9 = 3046648533720259945ULL;
unsigned int var_10 = 1203012543U;
unsigned long long int var_12 = 15755361030850102645ULL;
int zero = 0;
unsigned int var_19 = 175752724U;
signed char var_20 = (signed char)-114;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
