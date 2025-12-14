#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1378037871;
unsigned int var_12 = 415461780U;
unsigned short var_15 = (unsigned short)59495;
int var_16 = 1192025992;
signed char var_17 = (signed char)92;
int zero = 0;
unsigned long long int var_19 = 6203708796020427165ULL;
unsigned short var_20 = (unsigned short)13957;
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
