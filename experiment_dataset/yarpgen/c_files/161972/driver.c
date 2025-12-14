#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)13956;
unsigned long long int var_6 = 13814554470231000044ULL;
int zero = 0;
int var_12 = -1100494097;
unsigned long long int var_13 = 15549585681056759737ULL;
unsigned int var_14 = 2292246827U;
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
