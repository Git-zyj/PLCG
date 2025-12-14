#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_10 = (_Bool)0;
int var_11 = 1749217891;
signed char var_12 = (signed char)-122;
int var_15 = 1546815784;
int zero = 0;
unsigned char var_17 = (unsigned char)229;
unsigned long long int var_18 = 4874094011822853286ULL;
unsigned int var_19 = 268094960U;
int var_20 = 1725272742;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
