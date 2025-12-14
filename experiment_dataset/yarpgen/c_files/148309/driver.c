#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 151923448358702466LL;
unsigned long long int var_2 = 4466530687204294096ULL;
unsigned int var_3 = 2845417987U;
unsigned char var_5 = (unsigned char)141;
long long int var_11 = -2763370394260654344LL;
unsigned char var_13 = (unsigned char)236;
int zero = 0;
unsigned char var_16 = (unsigned char)44;
unsigned int var_17 = 4025537251U;
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
