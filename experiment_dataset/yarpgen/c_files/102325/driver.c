#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)33141;
long long int var_4 = -8132537305247596429LL;
unsigned char var_5 = (unsigned char)168;
unsigned int var_8 = 507510398U;
long long int var_12 = 3057473729283472603LL;
unsigned char var_14 = (unsigned char)20;
unsigned int var_15 = 1173555837U;
int zero = 0;
int var_17 = -494671481;
_Bool var_18 = (_Bool)1;
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
