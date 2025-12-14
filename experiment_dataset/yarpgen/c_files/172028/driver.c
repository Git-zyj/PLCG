#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 326761043;
unsigned int var_10 = 1607589703U;
unsigned short var_12 = (unsigned short)32244;
int zero = 0;
short var_20 = (short)-25525;
long long int var_21 = 5645402959420768392LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
