#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26796;
int var_9 = -465735207;
long long int var_13 = 793320995003156313LL;
int zero = 0;
int var_16 = 1981314440;
long long int var_17 = 5356566624750099544LL;
unsigned int var_18 = 57847438U;
unsigned short var_19 = (unsigned short)24319;
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
