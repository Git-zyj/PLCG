#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)11;
int var_5 = 1944974666;
unsigned long long int var_6 = 6392890201090613167ULL;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned char var_14 = (unsigned char)23;
int var_15 = -453988010;
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
