#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)54113;
unsigned int var_4 = 3486121915U;
unsigned long long int var_10 = 2683804322189090511ULL;
unsigned long long int var_11 = 2182966697709009098ULL;
int zero = 0;
short var_18 = (short)-22640;
unsigned int var_19 = 2426893094U;
unsigned int var_20 = 197402817U;
short var_21 = (short)22104;
unsigned int var_22 = 3090024560U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
