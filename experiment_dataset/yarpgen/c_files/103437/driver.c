#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4343799987147934318ULL;
unsigned long long int var_12 = 11946058452893840355ULL;
unsigned char var_16 = (unsigned char)5;
int zero = 0;
unsigned int var_20 = 2050546952U;
unsigned long long int var_21 = 16262998151865412518ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
