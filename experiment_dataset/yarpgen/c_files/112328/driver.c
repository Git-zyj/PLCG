#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4430104794438081327ULL;
short var_2 = (short)-29894;
int var_3 = 1099824358;
unsigned short var_6 = (unsigned short)4718;
unsigned short var_7 = (unsigned short)12530;
unsigned int var_8 = 1945538535U;
int zero = 0;
unsigned char var_10 = (unsigned char)121;
unsigned long long int var_11 = 15496292187441571588ULL;
int var_12 = 641007686;
short var_13 = (short)18549;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
