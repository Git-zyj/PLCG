#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8765468733884228328LL;
short var_3 = (short)-19532;
unsigned long long int var_5 = 17003668130454958633ULL;
unsigned int var_8 = 112632369U;
int zero = 0;
signed char var_12 = (signed char)74;
short var_13 = (short)-2290;
short var_14 = (short)-32296;
int var_15 = -732422169;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
