#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2542626940787192616ULL;
unsigned long long int var_11 = 1302792934708940845ULL;
long long int var_12 = -5938617200785092296LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 15505530243349648920ULL;
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
