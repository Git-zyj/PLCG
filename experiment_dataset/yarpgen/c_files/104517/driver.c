#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 2489028187U;
unsigned char var_11 = (unsigned char)87;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_15 = -1337849319;
short var_16 = (short)-4395;
unsigned char var_17 = (unsigned char)86;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
