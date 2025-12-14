#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10505659597177520090ULL;
short var_4 = (short)-22178;
int var_6 = 953075864;
short var_7 = (short)-1550;
int var_10 = -1704502370;
unsigned short var_12 = (unsigned short)63789;
unsigned long long int var_13 = 8838056245697735752ULL;
signed char var_14 = (signed char)-48;
unsigned long long int var_17 = 11364956360173200844ULL;
short var_18 = (short)-22094;
int zero = 0;
short var_20 = (short)2444;
unsigned int var_21 = 287812435U;
unsigned char var_22 = (unsigned char)131;
unsigned short var_23 = (unsigned short)5072;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
