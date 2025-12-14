#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-101;
short var_8 = (short)-657;
long long int var_9 = -2181420452880121199LL;
int zero = 0;
signed char var_10 = (signed char)100;
signed char var_11 = (signed char)112;
short var_12 = (short)-1696;
unsigned int var_13 = 1506099709U;
int var_14 = -606599064;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
