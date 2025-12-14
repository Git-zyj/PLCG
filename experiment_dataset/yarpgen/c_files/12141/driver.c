#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -823924;
signed char var_6 = (signed char)-36;
signed char var_10 = (signed char)18;
signed char var_11 = (signed char)-54;
int var_15 = 280694653;
int zero = 0;
int var_16 = -331789104;
int var_17 = -1246561817;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
