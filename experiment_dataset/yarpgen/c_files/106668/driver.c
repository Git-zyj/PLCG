#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-27327;
unsigned short var_7 = (unsigned short)23890;
unsigned char var_11 = (unsigned char)87;
unsigned char var_14 = (unsigned char)158;
long long int var_16 = 1798875380256392306LL;
short var_17 = (short)-28303;
int zero = 0;
unsigned short var_19 = (unsigned short)30089;
unsigned long long int var_20 = 10122841315024387408ULL;
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
