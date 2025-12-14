#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)14258;
long long int var_3 = 1559542410110756639LL;
unsigned char var_6 = (unsigned char)96;
unsigned short var_11 = (unsigned short)61;
int zero = 0;
signed char var_14 = (signed char)-127;
unsigned int var_15 = 4096134405U;
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
