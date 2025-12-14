#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17390060495745449395ULL;
unsigned long long int var_11 = 14211132148477104339ULL;
unsigned long long int var_13 = 10578932882608029078ULL;
int zero = 0;
unsigned long long int var_14 = 3316906123953027805ULL;
unsigned long long int var_15 = 1710369461156489720ULL;
unsigned long long int var_16 = 2713920579902743266ULL;
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
