#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -1651968120189290558LL;
unsigned long long int var_7 = 15954737160172611181ULL;
unsigned long long int var_10 = 8542183663442008469ULL;
int zero = 0;
long long int var_17 = -2647400193747355077LL;
long long int var_18 = -1562631976048372131LL;
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
