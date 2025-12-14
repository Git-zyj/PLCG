#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)2772;
unsigned int var_4 = 137748988U;
long long int var_5 = 4197843484058418269LL;
unsigned short var_6 = (unsigned short)55652;
int zero = 0;
unsigned char var_10 = (unsigned char)175;
unsigned int var_11 = 3770898810U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
