#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3440354535U;
_Bool var_5 = (_Bool)1;
int var_10 = -1971401659;
short var_13 = (short)15538;
int zero = 0;
unsigned short var_16 = (unsigned short)484;
short var_17 = (short)-5607;
short var_18 = (short)-5417;
short var_19 = (short)-5775;
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
