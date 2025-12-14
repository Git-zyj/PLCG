#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)126;
unsigned short var_8 = (unsigned short)13708;
_Bool var_10 = (_Bool)0;
int var_12 = 2105420702;
int zero = 0;
unsigned short var_15 = (unsigned short)10576;
unsigned int var_16 = 719177617U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
