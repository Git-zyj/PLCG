#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)46211;
unsigned char var_9 = (unsigned char)61;
short var_10 = (short)-15601;
unsigned char var_13 = (unsigned char)56;
signed char var_14 = (signed char)78;
unsigned int var_15 = 1199869362U;
int zero = 0;
unsigned long long int var_16 = 4908844966090786210ULL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
