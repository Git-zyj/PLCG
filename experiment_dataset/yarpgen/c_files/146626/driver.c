#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1658058296;
unsigned char var_14 = (unsigned char)113;
int zero = 0;
unsigned char var_15 = (unsigned char)206;
long long int var_16 = 9030759396831549453LL;
unsigned char var_17 = (unsigned char)30;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
