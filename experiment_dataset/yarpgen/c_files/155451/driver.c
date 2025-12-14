#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1576244955782595162LL;
unsigned short var_7 = (unsigned short)7795;
unsigned short var_8 = (unsigned short)19274;
unsigned short var_9 = (unsigned short)11312;
unsigned char var_11 = (unsigned char)241;
int zero = 0;
int var_12 = -328846944;
unsigned char var_13 = (unsigned char)104;
unsigned short var_14 = (unsigned short)51405;
unsigned short var_15 = (unsigned short)3389;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
