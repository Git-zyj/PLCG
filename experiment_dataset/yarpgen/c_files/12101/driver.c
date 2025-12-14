#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9046721055399481897ULL;
unsigned int var_3 = 2063570508U;
unsigned char var_4 = (unsigned char)61;
int zero = 0;
short var_18 = (short)23136;
int var_19 = -1904975887;
signed char var_20 = (signed char)-22;
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
