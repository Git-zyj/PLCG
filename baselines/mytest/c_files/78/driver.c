#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13695191348998418194ULL;
unsigned char var_3 = (unsigned char)53;
long long int var_9 = -6877491585255305208LL;
int zero = 0;
unsigned int var_11 = 499362436U;
int var_12 = 1571717114;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
