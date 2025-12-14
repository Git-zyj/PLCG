#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 2507368064302460935LL;
unsigned char var_8 = (unsigned char)33;
unsigned int var_11 = 1988271209U;
unsigned char var_12 = (unsigned char)167;
unsigned int var_13 = 3486593198U;
int var_14 = 958436170;
int zero = 0;
int var_16 = -1977639784;
int var_17 = 1785730168;
short var_18 = (short)-30327;
void init() {
}

void checksum() {
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
