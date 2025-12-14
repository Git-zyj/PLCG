#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1895609944;
unsigned int var_5 = 1666507878U;
unsigned int var_9 = 3760344522U;
unsigned short var_11 = (unsigned short)36924;
int var_15 = -1855619710;
int zero = 0;
long long int var_20 = 6130632377844276889LL;
unsigned int var_21 = 346155846U;
long long int var_22 = -9041464599715385149LL;
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
