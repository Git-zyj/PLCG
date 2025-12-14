#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 573258234;
unsigned long long int var_3 = 7079866641556345777ULL;
unsigned short var_6 = (unsigned short)27438;
unsigned char var_7 = (unsigned char)147;
long long int var_11 = 7437033675938963449LL;
int var_14 = 2086472574;
int zero = 0;
signed char var_16 = (signed char)28;
unsigned char var_17 = (unsigned char)224;
long long int var_18 = 8707856655540188971LL;
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
