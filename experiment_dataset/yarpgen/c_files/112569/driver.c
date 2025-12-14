#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-18358;
unsigned long long int var_6 = 3167759048078691578ULL;
unsigned int var_8 = 41479607U;
unsigned int var_11 = 2075510033U;
unsigned long long int var_14 = 5327189634440726853ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = 5752941206963365494LL;
long long int var_18 = -8649198001995786127LL;
long long int var_19 = -9122558389880576472LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
