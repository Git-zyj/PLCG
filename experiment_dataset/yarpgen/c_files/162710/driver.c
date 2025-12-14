#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
signed char var_10 = (signed char)-95;
unsigned char var_12 = (unsigned char)20;
short var_16 = (short)-22337;
unsigned int var_19 = 545258463U;
int zero = 0;
int var_20 = 908265740;
signed char var_21 = (signed char)108;
int var_22 = 933251345;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
