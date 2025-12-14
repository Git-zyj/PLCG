#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13293952878523235665ULL;
signed char var_5 = (signed char)117;
int var_10 = 723206666;
unsigned short var_11 = (unsigned short)48016;
int var_14 = 883077220;
int zero = 0;
short var_15 = (short)-14826;
_Bool var_16 = (_Bool)1;
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
