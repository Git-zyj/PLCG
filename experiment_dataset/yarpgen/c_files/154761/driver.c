#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57456;
unsigned char var_1 = (unsigned char)106;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-101;
signed char var_7 = (signed char)-8;
unsigned char var_10 = (unsigned char)7;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)107;
_Bool var_14 = (_Bool)0;
unsigned char var_16 = (unsigned char)157;
long long int var_17 = -5388830125746746204LL;
int zero = 0;
short var_18 = (short)17284;
long long int var_19 = -7081640769752417106LL;
_Bool var_20 = (_Bool)1;
long long int var_21 = 6987914305054377608LL;
unsigned int var_22 = 2352649641U;
unsigned char var_23 = (unsigned char)59;
short arr_1 [11] ;
unsigned char arr_6 [11] [11] [11] ;
long long int arr_8 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)8328 : (short)-18111;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)192 : (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 5814038042935188779LL : 33162515984481452LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
