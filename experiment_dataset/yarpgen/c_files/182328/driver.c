#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -322877953;
unsigned int var_2 = 3335237831U;
unsigned short var_10 = (unsigned short)27901;
int zero = 0;
unsigned long long int var_13 = 14686626477312118558ULL;
long long int var_14 = 2420480724541645116LL;
unsigned int var_15 = 3353472499U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
