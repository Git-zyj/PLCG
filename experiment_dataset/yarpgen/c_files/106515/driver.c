#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1060485266U;
unsigned int var_2 = 3928668025U;
short var_5 = (short)-3304;
short var_6 = (short)23114;
short var_7 = (short)-7175;
unsigned int var_8 = 4138626477U;
unsigned int var_11 = 3927358229U;
int zero = 0;
unsigned short var_16 = (unsigned short)17012;
unsigned short var_17 = (unsigned short)62357;
short var_18 = (short)10109;
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
