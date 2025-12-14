#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)42;
short var_3 = (short)1977;
unsigned char var_5 = (unsigned char)158;
unsigned long long int var_7 = 10636727317873308306ULL;
unsigned long long int var_8 = 13039002663724689936ULL;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)49;
int zero = 0;
signed char var_12 = (signed char)73;
unsigned char var_13 = (unsigned char)0;
unsigned long long int var_14 = 13026607877591071336ULL;
short var_15 = (short)-22973;
unsigned char var_16 = (unsigned char)134;
unsigned short arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)33654 : (unsigned short)50925;
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
