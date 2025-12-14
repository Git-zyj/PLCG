#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)54;
short var_2 = (short)-27795;
short var_3 = (short)27162;
int var_6 = 630647458;
unsigned char var_7 = (unsigned char)88;
unsigned short var_8 = (unsigned short)35735;
int zero = 0;
unsigned long long int var_10 = 2680868213187515672ULL;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)48;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
