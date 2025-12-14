#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
_Bool var_9 = (_Bool)1;
short var_11 = (short)-22462;
unsigned int var_13 = 3926383165U;
short var_16 = (short)-21748;
int zero = 0;
unsigned long long int var_17 = 4661637569077364254ULL;
short var_18 = (short)-18174;
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
