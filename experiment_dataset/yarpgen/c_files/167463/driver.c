#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2112774204;
long long int var_4 = -6451035736436748187LL;
unsigned int var_13 = 1743221789U;
long long int var_14 = -3841829873258380231LL;
int zero = 0;
long long int var_15 = 751605562772492391LL;
unsigned int var_16 = 811130205U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
