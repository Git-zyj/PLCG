#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8545147957852980479LL;
short var_2 = (short)15201;
short var_4 = (short)-25793;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-13191;
short var_10 = (short)28224;
long long int var_12 = -2704441998585988094LL;
short var_14 = (short)16020;
int zero = 0;
long long int var_15 = -531660212619479917LL;
int var_16 = -1102802399;
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
