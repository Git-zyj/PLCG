#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)210;
unsigned long long int var_4 = 16145225122316942500ULL;
unsigned long long int var_8 = 3967787284737201464ULL;
int var_11 = -1715542222;
int zero = 0;
int var_13 = 77379382;
short var_14 = (short)-28556;
short var_15 = (short)-16124;
short var_16 = (short)-14699;
unsigned long long int var_17 = 3025710333117729047ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
