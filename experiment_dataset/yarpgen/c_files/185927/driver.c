#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)11478;
unsigned char var_5 = (unsigned char)38;
long long int var_6 = -9137610725216098444LL;
unsigned char var_11 = (unsigned char)33;
int zero = 0;
unsigned char var_14 = (unsigned char)54;
long long int var_15 = -6628772889440883717LL;
void init() {
}

void checksum() {
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
