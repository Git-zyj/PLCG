#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2412775291890559816LL;
short var_2 = (short)30665;
short var_3 = (short)-3730;
unsigned int var_8 = 985917765U;
int zero = 0;
int var_13 = -1866321515;
unsigned short var_14 = (unsigned short)43796;
unsigned int var_15 = 4006793480U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
