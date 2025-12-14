#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17426;
long long int var_6 = 152922739300045390LL;
int var_10 = 1839000437;
signed char var_12 = (signed char)18;
int zero = 0;
signed char var_14 = (signed char)-97;
long long int var_15 = 2022718503763972007LL;
void init() {
}

void checksum() {
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
