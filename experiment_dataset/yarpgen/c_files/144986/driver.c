#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34856;
unsigned short var_7 = (unsigned short)28401;
unsigned short var_8 = (unsigned short)7691;
int zero = 0;
unsigned short var_14 = (unsigned short)30415;
long long int var_15 = 5275427700858137397LL;
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
