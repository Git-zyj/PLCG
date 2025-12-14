#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1397497449U;
unsigned char var_4 = (unsigned char)209;
unsigned long long int var_5 = 2364973893859936685ULL;
unsigned int var_7 = 1353101541U;
short var_8 = (short)-6322;
unsigned char var_10 = (unsigned char)122;
unsigned short var_14 = (unsigned short)12986;
int zero = 0;
short var_15 = (short)18526;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 4169177310U;
unsigned long long int var_18 = 899419557266296236ULL;
void init() {
}

void checksum() {
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
