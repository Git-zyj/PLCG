#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8488559025536529064LL;
unsigned short var_1 = (unsigned short)44651;
unsigned int var_7 = 4171595439U;
long long int var_10 = -5997975522409849633LL;
unsigned int var_11 = 2635850107U;
int zero = 0;
unsigned int var_12 = 2467618655U;
unsigned long long int var_13 = 15889165687318126032ULL;
long long int var_14 = 1512224748460862860LL;
_Bool var_15 = (_Bool)1;
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
