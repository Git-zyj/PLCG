#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)33;
unsigned short var_8 = (unsigned short)49773;
unsigned long long int var_11 = 16163597727721548840ULL;
int zero = 0;
long long int var_20 = -7410126089116143866LL;
short var_21 = (short)12223;
unsigned int var_22 = 1238163758U;
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
