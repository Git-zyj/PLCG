#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1175383216U;
unsigned char var_5 = (unsigned char)159;
unsigned int var_10 = 3047864264U;
short var_11 = (short)-4388;
int zero = 0;
unsigned long long int var_13 = 2403444758796477517ULL;
short var_14 = (short)16089;
_Bool var_15 = (_Bool)1;
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
