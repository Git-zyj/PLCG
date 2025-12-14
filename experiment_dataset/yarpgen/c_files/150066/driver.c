#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)215;
signed char var_3 = (signed char)106;
unsigned short var_4 = (unsigned short)42988;
unsigned char var_5 = (unsigned char)126;
unsigned char var_11 = (unsigned char)2;
int zero = 0;
signed char var_14 = (signed char)38;
unsigned short var_15 = (unsigned short)39863;
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
