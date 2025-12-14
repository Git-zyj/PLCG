#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 842868054U;
unsigned char var_6 = (unsigned char)73;
long long int var_10 = 1835477611268741175LL;
int zero = 0;
unsigned char var_14 = (unsigned char)75;
unsigned short var_15 = (unsigned short)26236;
unsigned char var_16 = (unsigned char)41;
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
