#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1943833593;
long long int var_8 = 2154431488796368415LL;
long long int var_9 = -8929915850797726094LL;
long long int var_13 = -5697515124104683526LL;
int zero = 0;
unsigned short var_15 = (unsigned short)50375;
short var_16 = (short)-21043;
int var_17 = -2109414886;
unsigned long long int var_18 = 4702202014848947095ULL;
void init() {
}

void checksum() {
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
