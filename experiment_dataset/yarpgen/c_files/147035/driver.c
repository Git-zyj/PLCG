#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1430018939;
unsigned short var_3 = (unsigned short)28914;
unsigned char var_8 = (unsigned char)97;
unsigned char var_12 = (unsigned char)63;
int zero = 0;
unsigned short var_15 = (unsigned short)29867;
unsigned short var_16 = (unsigned short)28080;
void init() {
}

void checksum() {
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
