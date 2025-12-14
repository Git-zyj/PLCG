#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2960726548U;
unsigned int var_10 = 1833101396U;
signed char var_13 = (signed char)80;
int zero = 0;
short var_17 = (short)-22739;
unsigned long long int var_18 = 10123017731155852823ULL;
short var_19 = (short)15334;
int var_20 = -451266396;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
