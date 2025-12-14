#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4322634957692827552LL;
long long int var_1 = 2672381389813618219LL;
long long int var_2 = 5533774187809350656LL;
long long int var_3 = 6437485007866594067LL;
long long int var_5 = -175809956274543764LL;
long long int var_9 = -6629045947269472223LL;
long long int var_10 = 1109551926492052745LL;
int zero = 0;
long long int var_11 = 7161748231163034061LL;
long long int var_12 = 3459207918705247085LL;
long long int var_13 = -6968067387797669310LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
