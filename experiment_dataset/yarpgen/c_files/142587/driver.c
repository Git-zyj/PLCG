#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -307410243;
signed char var_1 = (signed char)39;
_Bool var_4 = (_Bool)0;
unsigned long long int var_11 = 7759496016298985776ULL;
unsigned int var_12 = 2602313925U;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = 979507149;
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
