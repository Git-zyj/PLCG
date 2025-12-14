#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)13036;
_Bool var_6 = (_Bool)0;
short var_9 = (short)-28002;
long long int var_13 = 5788159379667676081LL;
int var_14 = 1378824495;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)11498;
int var_17 = 1032169728;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
