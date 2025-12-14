#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_12 = 14060405036746316716ULL;
unsigned int var_15 = 2475540783U;
unsigned long long int var_18 = 9396446303603919493ULL;
int zero = 0;
unsigned int var_19 = 1386236324U;
long long int var_20 = 1133020506719238040LL;
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
