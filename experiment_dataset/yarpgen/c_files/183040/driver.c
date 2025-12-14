#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)1;
int var_6 = 1973965734;
unsigned short var_9 = (unsigned short)70;
int zero = 0;
unsigned int var_14 = 3712532142U;
long long int var_15 = 5924492599599981113LL;
long long int var_16 = 1271975207678906232LL;
long long int var_17 = -107289061996191763LL;
short var_18 = (short)16301;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
