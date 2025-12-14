#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)18872;
unsigned int var_9 = 1483629128U;
unsigned long long int var_12 = 12274674328108863562ULL;
int zero = 0;
int var_15 = 900040474;
unsigned char var_16 = (unsigned char)242;
unsigned short var_17 = (unsigned short)52244;
unsigned char var_18 = (unsigned char)164;
void init() {
}

void checksum() {
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
