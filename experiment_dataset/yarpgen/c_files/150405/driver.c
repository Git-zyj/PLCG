#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17979970050760080679ULL;
unsigned int var_10 = 959651510U;
int zero = 0;
short var_11 = (short)-19355;
signed char var_12 = (signed char)17;
signed char var_13 = (signed char)16;
unsigned int var_14 = 1484648812U;
void init() {
}

void checksum() {
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
