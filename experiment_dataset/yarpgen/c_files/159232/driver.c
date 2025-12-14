#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-23884;
unsigned long long int var_6 = 2028389536659630829ULL;
_Bool var_8 = (_Bool)1;
long long int var_9 = -7216125470043610711LL;
short var_10 = (short)-30373;
int var_15 = -90848676;
int zero = 0;
unsigned short var_16 = (unsigned short)55918;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
