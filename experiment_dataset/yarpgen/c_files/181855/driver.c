#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1315803534;
long long int var_3 = -6286131318340665585LL;
long long int var_5 = -5350095802523601156LL;
unsigned long long int var_8 = 18422737384996511567ULL;
unsigned long long int var_10 = 8738235857212477350ULL;
int zero = 0;
int var_11 = 1404827081;
long long int var_12 = -6723085442322513872LL;
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
