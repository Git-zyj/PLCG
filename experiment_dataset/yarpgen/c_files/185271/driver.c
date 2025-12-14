#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1745612986179957474ULL;
unsigned char var_12 = (unsigned char)130;
unsigned long long int var_13 = 7634688968564000276ULL;
int zero = 0;
unsigned long long int var_16 = 17221965338893303208ULL;
unsigned long long int var_17 = 7983463604434147158ULL;
void init() {
}

void checksum() {
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
