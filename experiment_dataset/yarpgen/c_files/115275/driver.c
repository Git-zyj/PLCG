#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)22630;
unsigned int var_7 = 2517312183U;
unsigned long long int var_8 = 15113155282932051432ULL;
short var_16 = (short)6829;
int zero = 0;
unsigned int var_17 = 2842451731U;
long long int var_18 = 2665975771689062968LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
