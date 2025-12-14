#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)23023;
unsigned int var_8 = 716315150U;
unsigned int var_9 = 2020598529U;
unsigned int var_11 = 1839346485U;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 14635654946740989932ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
