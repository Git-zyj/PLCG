#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)192;
unsigned short var_3 = (unsigned short)15691;
unsigned int var_8 = 3012143128U;
unsigned short var_13 = (unsigned short)34176;
unsigned char var_14 = (unsigned char)12;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 532584299U;
unsigned int var_18 = 1306102801U;
void init() {
}

void checksum() {
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
