#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -679136140777620147LL;
int var_4 = 19902192;
unsigned long long int var_7 = 15502959853880332745ULL;
unsigned char var_8 = (unsigned char)4;
unsigned int var_10 = 1546886090U;
unsigned short var_11 = (unsigned short)24176;
signed char var_13 = (signed char)5;
int zero = 0;
unsigned int var_14 = 2107254434U;
unsigned char var_15 = (unsigned char)129;
unsigned short var_16 = (unsigned short)8413;
short var_17 = (short)24650;
unsigned char var_18 = (unsigned char)192;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
