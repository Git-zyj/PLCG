#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-58;
long long int var_1 = 479698906976258918LL;
signed char var_2 = (signed char)74;
unsigned long long int var_3 = 13326695829844163493ULL;
signed char var_9 = (signed char)71;
unsigned long long int var_12 = 4792798485906381452ULL;
unsigned int var_14 = 2079795112U;
int zero = 0;
signed char var_15 = (signed char)-39;
short var_16 = (short)-18894;
unsigned int var_17 = 1251886658U;
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
