#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)55;
signed char var_7 = (signed char)-91;
unsigned long long int var_12 = 8118465207352094469ULL;
int zero = 0;
unsigned int var_15 = 3521262680U;
unsigned int var_16 = 1965700018U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
