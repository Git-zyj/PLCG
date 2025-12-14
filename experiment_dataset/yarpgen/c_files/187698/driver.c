#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 38736761982181560ULL;
unsigned char var_7 = (unsigned char)28;
unsigned char var_12 = (unsigned char)80;
int zero = 0;
unsigned char var_14 = (unsigned char)111;
unsigned short var_15 = (unsigned short)63005;
unsigned char var_16 = (unsigned char)158;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
