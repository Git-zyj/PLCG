#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4400171955003559429LL;
long long int var_6 = -7864387987335490484LL;
long long int var_10 = 2460437179815816345LL;
long long int var_12 = 2685613021242988376LL;
long long int var_15 = -4924952417365247712LL;
int zero = 0;
long long int var_17 = -6298286565437602455LL;
long long int var_18 = -6447887842261158389LL;
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
