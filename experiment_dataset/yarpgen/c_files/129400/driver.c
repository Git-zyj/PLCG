#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)16160;
unsigned long long int var_3 = 17577457913933415145ULL;
signed char var_6 = (signed char)6;
unsigned char var_10 = (unsigned char)243;
int zero = 0;
unsigned char var_16 = (unsigned char)112;
short var_17 = (short)-31101;
unsigned long long int var_18 = 6788087930058071904ULL;
short var_19 = (short)-7278;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
