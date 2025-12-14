#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_5 = (unsigned char)22;
unsigned short var_6 = (unsigned short)34749;
signed char var_10 = (signed char)113;
int zero = 0;
signed char var_14 = (signed char)126;
unsigned long long int var_15 = 6770960881996282586ULL;
short var_16 = (short)24120;
long long int var_17 = -757236045211155603LL;
unsigned short var_18 = (unsigned short)2068;
unsigned short var_19 = (unsigned short)41143;
unsigned long long int var_20 = 3130380761378291485ULL;
unsigned long long int var_21 = 8056660686643013959ULL;
int var_22 = 1386913984;
signed char var_23 = (signed char)-32;
unsigned char var_24 = (unsigned char)119;
signed char var_25 = (signed char)-91;
unsigned int var_26 = 2601998822U;
int var_27 = 1212218895;
unsigned long long int var_28 = 18014345506378342835ULL;
short arr_0 [11] ;
_Bool arr_1 [11] [11] ;
unsigned int arr_2 [11] ;
unsigned int arr_3 [11] [11] ;
signed char arr_5 [16] ;
unsigned int arr_7 [16] [16] ;
unsigned long long int arr_10 [15] [15] ;
unsigned short arr_11 [15] ;
int arr_12 [15] ;
unsigned char arr_15 [15] [15] [15] ;
unsigned long long int arr_4 [11] [11] [11] ;
unsigned int arr_8 [16] [16] ;
unsigned long long int arr_14 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)-14400;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 788903116U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 3632821580U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = 3383719197U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = 1378055595035330889ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (unsigned short)52076;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = -1024070557;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2526259529271947417ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 4123300835U : 2149964670U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 299671082106771572ULL : 4623106963246597529ULL;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
