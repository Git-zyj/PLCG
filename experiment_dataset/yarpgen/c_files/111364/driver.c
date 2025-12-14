#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1954800738;
unsigned long long int var_7 = 1538924735745230828ULL;
int zero = 0;
unsigned long long int var_12 = 14901122865170915108ULL;
unsigned long long int var_13 = 16393598998028239ULL;
int var_14 = -1871274620;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
