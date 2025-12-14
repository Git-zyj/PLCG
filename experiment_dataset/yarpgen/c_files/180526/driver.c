#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)9;
unsigned short var_7 = (unsigned short)58226;
int var_14 = 673137110;
int zero = 0;
unsigned long long int var_15 = 7100139720876056562ULL;
unsigned char var_16 = (unsigned char)75;
unsigned short var_17 = (unsigned short)18189;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
