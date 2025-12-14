#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2529701574U;
long long int var_2 = -7765622188429228295LL;
signed char var_3 = (signed char)23;
unsigned char var_4 = (unsigned char)39;
short var_6 = (short)-16260;
int var_8 = -807883216;
unsigned int var_10 = 1773826205U;
unsigned char var_12 = (unsigned char)59;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 831125531U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
