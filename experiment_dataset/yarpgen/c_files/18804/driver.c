#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24579;
short var_5 = (short)31353;
unsigned int var_14 = 2808375108U;
int zero = 0;
unsigned long long int var_15 = 16943477655109477026ULL;
long long int var_16 = 7678296517181501480LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
