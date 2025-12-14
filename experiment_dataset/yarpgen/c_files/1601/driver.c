#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)170;
signed char var_3 = (signed char)-69;
int var_5 = 1449891634;
unsigned short var_7 = (unsigned short)31114;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)126;
short var_13 = (short)-22427;
int var_14 = 1249670137;
int zero = 0;
signed char var_15 = (signed char)-108;
unsigned int var_16 = 3958340097U;
int var_17 = 1646636234;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
