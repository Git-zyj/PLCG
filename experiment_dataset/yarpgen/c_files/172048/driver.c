#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_16 = 574598989051869755ULL;
unsigned int var_19 = 50697650U;
int zero = 0;
unsigned int var_20 = 250630809U;
signed char var_21 = (signed char)2;
unsigned long long int var_22 = 3801098654116557296ULL;
unsigned long long int var_23 = 11552599750189610239ULL;
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
