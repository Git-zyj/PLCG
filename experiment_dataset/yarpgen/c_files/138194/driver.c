#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -572039928;
unsigned long long int var_7 = 12302301892910915849ULL;
long long int var_9 = 6005554957828996443LL;
short var_12 = (short)-6505;
int zero = 0;
signed char var_13 = (signed char)-43;
unsigned int var_14 = 3054734086U;
short var_15 = (short)32097;
unsigned int var_16 = 3668410513U;
signed char var_17 = (signed char)77;
short var_18 = (short)29346;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
