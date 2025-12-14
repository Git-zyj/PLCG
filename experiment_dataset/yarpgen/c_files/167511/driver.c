#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)3182;
unsigned short var_3 = (unsigned short)24418;
short var_5 = (short)-30899;
long long int var_9 = 1850175068158409144LL;
int zero = 0;
long long int var_10 = 4191374865680764570LL;
unsigned long long int var_11 = 1501325250963651839ULL;
unsigned short var_12 = (unsigned short)48997;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
