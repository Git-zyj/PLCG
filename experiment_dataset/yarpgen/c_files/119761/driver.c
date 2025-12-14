#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_5 = 14428360490990981040ULL;
int var_7 = -322168650;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 3074772578U;
_Bool var_15 = (_Bool)1;
short var_16 = (short)24218;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
