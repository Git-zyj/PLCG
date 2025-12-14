#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2510863267U;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 1229099744U;
unsigned long long int var_16 = 12760976830481154403ULL;
unsigned int var_17 = 2598079328U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
