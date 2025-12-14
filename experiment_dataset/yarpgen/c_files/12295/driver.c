#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -1782621675753903479LL;
unsigned long long int var_10 = 13152863428409622001ULL;
unsigned long long int var_12 = 14711937054494159520ULL;
int zero = 0;
unsigned long long int var_14 = 4797400562731467604ULL;
unsigned long long int var_15 = 6973529189086497801ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
