#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-7636;
long long int var_6 = 6345307175013233520LL;
unsigned int var_8 = 1045068535U;
unsigned int var_12 = 3522424294U;
unsigned long long int var_17 = 16519073160721164886ULL;
int zero = 0;
signed char var_20 = (signed char)19;
signed char var_21 = (signed char)24;
unsigned long long int var_22 = 4324052722411139421ULL;
short var_23 = (short)31291;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
