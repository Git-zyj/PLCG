#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 548624445781084929LL;
int var_10 = 1527024796;
signed char var_13 = (signed char)56;
unsigned int var_15 = 2994957678U;
int zero = 0;
signed char var_19 = (signed char)-26;
signed char var_20 = (signed char)-86;
void init() {
}

void checksum() {
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
