#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1851760618;
signed char var_4 = (signed char)79;
unsigned int var_5 = 3496503034U;
int var_6 = 138415826;
short var_8 = (short)-7832;
unsigned char var_12 = (unsigned char)17;
int zero = 0;
signed char var_14 = (signed char)-109;
long long int var_15 = -8338549929604103236LL;
unsigned char var_16 = (unsigned char)53;
unsigned long long int var_17 = 4358531380094103648ULL;
long long int var_18 = -5659181403154118189LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
