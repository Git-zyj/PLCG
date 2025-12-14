#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)112;
unsigned long long int var_4 = 5640840876220477015ULL;
short var_8 = (short)27030;
unsigned char var_11 = (unsigned char)137;
short var_12 = (short)14679;
int zero = 0;
short var_13 = (short)-18071;
unsigned int var_14 = 1048095578U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
