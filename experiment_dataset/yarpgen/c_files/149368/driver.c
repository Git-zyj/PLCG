#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 8002966134580268437ULL;
int var_5 = -2142438883;
_Bool var_7 = (_Bool)1;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 1360900531327915376ULL;
unsigned long long int var_15 = 1458036788159255373ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
