#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12762871576644863346ULL;
long long int var_1 = 7659787046129814086LL;
unsigned long long int var_6 = 4776028185085282411ULL;
unsigned short var_11 = (unsigned short)42619;
long long int var_12 = 595851810212504431LL;
long long int var_19 = 2911351719239274167LL;
int zero = 0;
unsigned short var_20 = (unsigned short)20778;
short var_21 = (short)16883;
int var_22 = 1447104268;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
