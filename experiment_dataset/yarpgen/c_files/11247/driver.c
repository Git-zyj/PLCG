#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 2589668484921168417LL;
unsigned long long int var_12 = 3111498011850157945ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)46088;
short var_17 = (short)6287;
short var_18 = (short)-28477;
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
