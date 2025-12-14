#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1103383831;
unsigned int var_5 = 552364804U;
long long int var_7 = -6030651874529468063LL;
unsigned long long int var_9 = 10830972819362421883ULL;
int zero = 0;
unsigned int var_13 = 2301720289U;
short var_14 = (short)4289;
unsigned int var_15 = 252135419U;
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
