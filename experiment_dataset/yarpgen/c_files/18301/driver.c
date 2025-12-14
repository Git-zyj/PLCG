#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9251308090652796264ULL;
int var_6 = 1275278802;
long long int var_7 = -6866613255516387031LL;
int var_11 = 1588639603;
int zero = 0;
int var_12 = -1221630413;
short var_13 = (short)-18958;
short var_14 = (short)-14713;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
