#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1099100335;
unsigned int var_9 = 1717756548U;
long long int var_15 = -9135040217209337077LL;
int zero = 0;
unsigned int var_16 = 435332522U;
unsigned char var_17 = (unsigned char)172;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
