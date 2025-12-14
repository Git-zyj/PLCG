#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)151;
unsigned short var_3 = (unsigned short)65348;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)45337;
long long int var_7 = -8303860330954989925LL;
int var_9 = 1636460492;
unsigned long long int var_13 = 2801574761251932914ULL;
signed char var_14 = (signed char)81;
unsigned int var_15 = 1555278762U;
unsigned long long int var_16 = 8521815870281940599ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)144;
unsigned short var_18 = (unsigned short)13573;
short var_19 = (short)7034;
unsigned int var_20 = 1227854406U;
unsigned int var_21 = 995282941U;
int var_22 = -1573907436;
_Bool var_23 = (_Bool)0;
unsigned int arr_5 [18] [18] ;
unsigned char arr_8 [22] ;
_Bool arr_9 [22] ;
unsigned char arr_2 [18] ;
signed char arr_7 [18] [18] [18] ;
unsigned char arr_10 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 1305048023U : 2261629624U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)227 : (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)70 : (signed char)-43;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)98;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
