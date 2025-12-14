#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1184198210530687231LL;
int var_7 = -1583472870;
unsigned short var_8 = (unsigned short)1993;
unsigned int var_9 = 3167535886U;
int zero = 0;
unsigned int var_12 = 2151971939U;
long long int var_13 = -5211138806106174723LL;
signed char var_14 = (signed char)4;
long long int var_15 = 8767178039828000372LL;
unsigned short var_16 = (unsigned short)37361;
unsigned char arr_0 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)14;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
