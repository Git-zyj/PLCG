#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16300;
signed char var_1 = (signed char)-84;
short var_2 = (short)30377;
unsigned int var_3 = 2575648856U;
short var_4 = (short)14523;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)21281;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)27783;
int zero = 0;
unsigned short var_10 = (unsigned short)16374;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)35643;
unsigned int var_13 = 4283809668U;
unsigned char var_14 = (unsigned char)110;
unsigned char var_15 = (unsigned char)194;
unsigned long long int var_16 = 17415579921926502558ULL;
unsigned long long int var_17 = 7777307940209849934ULL;
unsigned long long int arr_0 [19] ;
short arr_1 [19] ;
unsigned short arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 3544158716694356792ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)-16388;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)16725 : (unsigned short)27561;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
