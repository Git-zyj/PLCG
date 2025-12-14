#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2802639151967669222LL;
unsigned long long int var_13 = 9230833783438410973ULL;
short var_14 = (short)1530;
int zero = 0;
int var_15 = -1587540189;
unsigned long long int var_16 = 12576186457340808985ULL;
unsigned int var_17 = 3187589122U;
short var_18 = (short)-24585;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
