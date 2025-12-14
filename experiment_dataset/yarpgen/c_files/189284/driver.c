#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-18282;
short var_6 = (short)-16070;
unsigned int var_10 = 4180299066U;
int zero = 0;
short var_17 = (short)-22283;
short var_18 = (short)-13117;
int var_19 = -1860441448;
short var_20 = (short)21946;
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
