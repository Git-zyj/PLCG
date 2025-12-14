#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2253846448U;
signed char var_9 = (signed char)80;
signed char var_10 = (signed char)93;
unsigned int var_17 = 71566054U;
int zero = 0;
long long int var_19 = 9015218061666930215LL;
signed char var_20 = (signed char)-41;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
