#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15439216631169812754ULL;
unsigned int var_7 = 4113220131U;
int zero = 0;
unsigned long long int var_14 = 11951460604967270711ULL;
unsigned long long int var_15 = 616266056426033209ULL;
unsigned short var_16 = (unsigned short)50983;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
