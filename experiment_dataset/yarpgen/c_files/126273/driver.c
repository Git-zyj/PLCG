#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17589;
unsigned char var_4 = (unsigned char)65;
unsigned int var_5 = 3692349940U;
short var_8 = (short)3076;
int zero = 0;
unsigned long long int var_14 = 16816033223607637324ULL;
unsigned long long int var_15 = 2492121562018762033ULL;
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
