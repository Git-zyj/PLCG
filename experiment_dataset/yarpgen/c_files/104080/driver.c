#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13789;
long long int var_2 = -6606382659713367076LL;
unsigned long long int var_5 = 10620128037134616212ULL;
unsigned int var_8 = 2105066739U;
unsigned short var_10 = (unsigned short)622;
short var_11 = (short)-3988;
int zero = 0;
unsigned char var_13 = (unsigned char)107;
int var_14 = 455054915;
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
