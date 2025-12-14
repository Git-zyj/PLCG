#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26299;
_Bool var_1 = (_Bool)0;
short var_5 = (short)-22761;
short var_11 = (short)-22159;
unsigned char var_14 = (unsigned char)112;
int zero = 0;
unsigned char var_17 = (unsigned char)218;
unsigned int var_18 = 2030095649U;
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
