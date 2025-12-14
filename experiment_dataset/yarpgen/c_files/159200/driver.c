#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)253;
unsigned short var_8 = (unsigned short)27144;
unsigned short var_9 = (unsigned short)58329;
long long int var_12 = -8107680776650391647LL;
int zero = 0;
unsigned char var_16 = (unsigned char)212;
long long int var_17 = -5691577446382722671LL;
long long int var_18 = 2894850058259563741LL;
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
