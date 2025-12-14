#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2933;
long long int var_1 = 7271004487133394000LL;
short var_5 = (short)988;
short var_6 = (short)-23517;
int var_7 = -494563771;
int zero = 0;
int var_11 = -1576822300;
int var_12 = 1946650890;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
