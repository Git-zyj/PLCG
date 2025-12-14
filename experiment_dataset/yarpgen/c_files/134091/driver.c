#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)153;
unsigned long long int var_3 = 14756019817643893378ULL;
unsigned char var_5 = (unsigned char)216;
signed char var_7 = (signed char)39;
unsigned int var_8 = 1714409303U;
unsigned short var_11 = (unsigned short)55978;
signed char var_14 = (signed char)16;
int zero = 0;
unsigned short var_15 = (unsigned short)22943;
short var_16 = (short)-7707;
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
