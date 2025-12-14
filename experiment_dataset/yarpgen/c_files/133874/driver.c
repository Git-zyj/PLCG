#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)187;
unsigned long long int var_7 = 1729174387587539039ULL;
int zero = 0;
long long int var_18 = 1031887327238372516LL;
unsigned long long int var_19 = 13790024322760724507ULL;
unsigned long long int var_20 = 8433813922186116825ULL;
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
