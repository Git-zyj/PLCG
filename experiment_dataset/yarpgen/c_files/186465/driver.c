#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2180353737U;
short var_3 = (short)8406;
short var_8 = (short)7127;
short var_9 = (short)-32362;
int zero = 0;
unsigned char var_10 = (unsigned char)21;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1643114342U;
long long int var_13 = 2589027484300099220LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
