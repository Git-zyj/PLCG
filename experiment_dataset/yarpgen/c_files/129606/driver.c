#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2084149565;
unsigned char var_1 = (unsigned char)60;
unsigned short var_2 = (unsigned short)26232;
unsigned short var_4 = (unsigned short)2837;
unsigned int var_5 = 3099411820U;
unsigned short var_6 = (unsigned short)17272;
signed char var_9 = (signed char)-122;
unsigned short var_10 = (unsigned short)15132;
unsigned int var_13 = 3144451469U;
int zero = 0;
unsigned long long int var_14 = 5525593697679909710ULL;
unsigned long long int var_15 = 14302316096118726982ULL;
long long int var_16 = -4007451053117958059LL;
int var_17 = 2109385369;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)221;
int var_20 = 1828493768;
_Bool var_21 = (_Bool)1;
int var_22 = -441234616;
unsigned char var_23 = (unsigned char)178;
unsigned short var_24 = (unsigned short)39476;
int arr_0 [12] ;
signed char arr_2 [12] [12] ;
int arr_3 [12] [12] ;
unsigned int arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 929718893;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 256649227;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 4269665937U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
