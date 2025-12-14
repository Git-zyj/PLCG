#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-28845;
unsigned short var_8 = (unsigned short)12590;
unsigned char var_14 = (unsigned char)17;
int zero = 0;
signed char var_16 = (signed char)-93;
short var_17 = (short)19184;
unsigned long long int var_18 = 5536144594108503705ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
