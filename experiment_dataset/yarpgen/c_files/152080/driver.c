#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12502153779840911930ULL;
_Bool var_1 = (_Bool)1;
long long int var_2 = 8406286755908718272LL;
unsigned char var_3 = (unsigned char)179;
unsigned char var_4 = (unsigned char)71;
unsigned int var_5 = 3127235102U;
unsigned short var_6 = (unsigned short)55504;
unsigned long long int var_7 = 11626172450083746303ULL;
short var_8 = (short)-28335;
unsigned long long int var_9 = 10668493483077604578ULL;
unsigned int var_10 = 1331565501U;
unsigned long long int var_11 = 11108372788409106767ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)140;
unsigned long long int var_13 = 7494633501586993062ULL;
unsigned short var_14 = (unsigned short)31207;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)166;
unsigned short var_17 = (unsigned short)28803;
short var_18 = (short)12592;
_Bool var_19 = (_Bool)1;
int var_20 = 202844166;
unsigned long long int var_21 = 318496384215445616ULL;
unsigned char arr_0 [14] [14] ;
_Bool arr_1 [14] ;
unsigned long long int arr_2 [14] ;
unsigned short arr_4 [14] ;
unsigned short arr_5 [14] [14] ;
unsigned long long int arr_7 [14] [14] ;
_Bool arr_8 [14] [14] ;
unsigned short arr_9 [14] [14] ;
unsigned short arr_11 [15] ;
unsigned short arr_3 [14] [14] ;
unsigned short arr_10 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)207 : (unsigned char)230;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 12444612182654220232ULL : 1082621111769812898ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)55897 : (unsigned short)3293;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)6891;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 2689078715667361406ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)35532;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (unsigned short)13288;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)20747 : (unsigned short)53857;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)62590 : (unsigned short)50231;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
