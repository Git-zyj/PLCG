#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9841191896047816294ULL;
unsigned long long int var_4 = 4626527676190866749ULL;
signed char var_6 = (signed char)-97;
unsigned int var_17 = 1877393781U;
unsigned long long int var_18 = 1364902888997812735ULL;
int zero = 0;
long long int var_19 = -6878212403359115997LL;
unsigned int var_20 = 2320086091U;
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
