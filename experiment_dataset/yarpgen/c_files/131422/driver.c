#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2203171479948539710ULL;
int var_3 = -838928914;
signed char var_4 = (signed char)23;
long long int var_6 = -5185413824585838749LL;
unsigned char var_10 = (unsigned char)21;
int var_11 = 2100729135;
unsigned char var_12 = (unsigned char)255;
int zero = 0;
unsigned int var_14 = 3865006811U;
unsigned short var_15 = (unsigned short)64682;
short var_16 = (short)2403;
unsigned char var_17 = (unsigned char)76;
unsigned short var_18 = (unsigned short)50929;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
