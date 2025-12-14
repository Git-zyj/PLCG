#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11106;
unsigned int var_2 = 332590770U;
unsigned char var_11 = (unsigned char)172;
unsigned char var_15 = (unsigned char)153;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_19 = (short)-13028;
unsigned short var_20 = (unsigned short)59008;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
