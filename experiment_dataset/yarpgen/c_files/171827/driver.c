#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)28378;
unsigned int var_8 = 862932022U;
int var_13 = -1359720153;
unsigned int var_15 = 2404192522U;
short var_18 = (short)-19155;
int zero = 0;
unsigned short var_20 = (unsigned short)42228;
_Bool var_21 = (_Bool)0;
short var_22 = (short)11806;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
