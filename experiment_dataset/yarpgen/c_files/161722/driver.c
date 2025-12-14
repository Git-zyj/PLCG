#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -465104470;
int var_2 = 1992403949;
unsigned long long int var_12 = 3393902762862506546ULL;
int zero = 0;
long long int var_15 = 3930292460539994120LL;
unsigned long long int var_16 = 16724636935399874940ULL;
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
