#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61511;
unsigned short var_3 = (unsigned short)43902;
unsigned short var_4 = (unsigned short)9135;
int var_5 = -1900091502;
unsigned short var_6 = (unsigned short)46344;
unsigned short var_11 = (unsigned short)2860;
unsigned short var_14 = (unsigned short)27348;
int zero = 0;
int var_16 = -668272643;
unsigned short var_17 = (unsigned short)14368;
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
