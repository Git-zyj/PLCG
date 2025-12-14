#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13141258172597881489ULL;
long long int var_11 = -5395616545391866341LL;
short var_12 = (short)-16475;
int zero = 0;
unsigned int var_18 = 2943832157U;
unsigned long long int var_19 = 6355734353811886135ULL;
void init() {
}

void checksum() {
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
