#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 14513518710567796535ULL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 8894627945673900368ULL;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-10023;
short var_15 = (short)-32016;
int zero = 0;
unsigned long long int var_17 = 823361062880356851ULL;
long long int var_18 = -5706154296909040399LL;
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
