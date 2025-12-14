#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)140;
unsigned long long int var_10 = 601234597460659139ULL;
unsigned char var_13 = (unsigned char)87;
unsigned short var_15 = (unsigned short)27946;
int zero = 0;
short var_16 = (short)8745;
signed char var_17 = (signed char)-6;
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
