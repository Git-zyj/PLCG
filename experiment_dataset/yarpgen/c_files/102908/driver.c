#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 997703324;
unsigned long long int var_1 = 17572826407906629388ULL;
long long int var_6 = 452744359805250652LL;
long long int var_16 = -1338193631496631937LL;
int zero = 0;
signed char var_17 = (signed char)53;
unsigned short var_18 = (unsigned short)44530;
void init() {
}

void checksum() {
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
