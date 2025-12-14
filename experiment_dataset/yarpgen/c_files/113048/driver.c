#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)224;
unsigned char var_11 = (unsigned char)127;
unsigned char var_17 = (unsigned char)148;
int zero = 0;
unsigned short var_20 = (unsigned short)53398;
unsigned char var_21 = (unsigned char)10;
unsigned long long int var_22 = 7885114398699655848ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
