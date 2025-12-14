#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)7946;
short var_3 = (short)-7031;
short var_4 = (short)12415;
short var_6 = (short)47;
short var_7 = (short)-23744;
int zero = 0;
short var_14 = (short)-5873;
short var_15 = (short)13839;
short var_16 = (short)22235;
short var_17 = (short)-30889;
short var_18 = (short)-9701;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
