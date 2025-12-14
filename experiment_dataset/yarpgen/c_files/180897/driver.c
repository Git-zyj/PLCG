#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)66;
unsigned char var_5 = (unsigned char)185;
long long int var_6 = 5785062467301147647LL;
signed char var_8 = (signed char)-1;
unsigned char var_9 = (unsigned char)151;
unsigned short var_10 = (unsigned short)62588;
unsigned short var_11 = (unsigned short)40790;
int var_12 = -2091510295;
signed char var_14 = (signed char)-124;
unsigned long long int var_16 = 17951626464464406940ULL;
int zero = 0;
unsigned long long int var_20 = 18299882742243610044ULL;
unsigned char var_21 = (unsigned char)84;
unsigned short var_22 = (unsigned short)59585;
unsigned long long int var_23 = 12361459085441284608ULL;
unsigned long long int var_24 = 12023175056117120200ULL;
unsigned int var_25 = 85573283U;
unsigned long long int var_26 = 4962163260545677986ULL;
unsigned char var_27 = (unsigned char)29;
signed char var_28 = (signed char)-14;
long long int arr_0 [19] ;
unsigned int arr_1 [19] [19] ;
_Bool arr_3 [14] [14] ;
_Bool arr_4 [14] ;
unsigned char arr_5 [14] [14] ;
short arr_6 [14] [14] ;
int arr_8 [14] ;
unsigned int arr_2 [19] ;
signed char arr_7 [14] [14] ;
long long int arr_10 [14] [14] ;
unsigned short arr_11 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 7245492220401331232LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 599779166U : 1402310475U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-18219;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 388802985;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 4086628357U : 1203340041U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)20;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = 7559163329041703946LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (unsigned short)3361;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
