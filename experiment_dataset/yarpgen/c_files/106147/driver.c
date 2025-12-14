#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3467774680U;
unsigned char var_5 = (unsigned char)124;
unsigned short var_6 = (unsigned short)48561;
unsigned int var_10 = 2627430856U;
int zero = 0;
unsigned short var_17 = (unsigned short)61626;
unsigned short var_18 = (unsigned short)43685;
void init() {
}

void checksum() {
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
