#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 881158173;
unsigned long long int var_1 = 1784007046193013838ULL;
unsigned int var_3 = 2965692677U;
unsigned long long int var_4 = 339588837041137425ULL;
unsigned int var_5 = 1979485766U;
unsigned short var_6 = (unsigned short)39487;
short var_7 = (short)-12387;
unsigned long long int var_8 = 8591666397232089334ULL;
unsigned int var_12 = 2722899217U;
signed char var_14 = (signed char)-60;
int zero = 0;
unsigned char var_15 = (unsigned char)178;
unsigned char var_16 = (unsigned char)86;
signed char var_17 = (signed char)-24;
unsigned char var_18 = (unsigned char)34;
int arr_0 [18] ;
unsigned long long int arr_1 [18] [18] ;
unsigned long long int arr_4 [18] [18] ;
int arr_5 [18] ;
_Bool arr_6 [18] ;
short arr_9 [13] ;
_Bool arr_2 [18] ;
unsigned int arr_3 [18] ;
int arr_7 [18] ;
unsigned int arr_8 [18] ;
unsigned short arr_11 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -1361741245;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 5564232021350775819ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 15436445540658834502ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = -1684905786;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (short)-28492;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 120421518U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 1688224730;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 820293049U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)30873 : (unsigned short)43182;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
