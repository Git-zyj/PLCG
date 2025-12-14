#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)3887;
unsigned long long int var_11 = 16395889766716746333ULL;
short var_13 = (short)-25857;
unsigned int var_15 = 1130874273U;
short var_17 = (short)4973;
int zero = 0;
long long int var_18 = -5210544475380020709LL;
unsigned int var_19 = 333654836U;
short var_20 = (short)24550;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
