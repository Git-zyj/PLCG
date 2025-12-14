#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-44;
short var_3 = (short)29991;
_Bool var_4 = (_Bool)1;
long long int var_6 = -7028442798334333517LL;
short var_8 = (short)-28287;
unsigned int var_9 = 1256955546U;
unsigned char var_10 = (unsigned char)106;
signed char var_11 = (signed char)-66;
unsigned char var_12 = (unsigned char)66;
long long int var_15 = 3256269000597763792LL;
int zero = 0;
unsigned short var_17 = (unsigned short)35780;
short var_18 = (short)13195;
unsigned short var_19 = (unsigned short)8295;
long long int var_20 = 1739633325476034162LL;
int var_21 = -835717031;
unsigned char var_22 = (unsigned char)219;
long long int var_23 = -1908848238393366192LL;
unsigned short var_24 = (unsigned short)13682;
signed char var_25 = (signed char)85;
short var_26 = (short)9081;
_Bool var_27 = (_Bool)0;
unsigned short var_28 = (unsigned short)61616;
unsigned int arr_1 [14] ;
_Bool arr_5 [15] [15] ;
short arr_6 [15] ;
unsigned char arr_8 [15] [15] ;
unsigned short arr_9 [15] [15] ;
long long int arr_10 [15] ;
short arr_2 [14] [14] ;
unsigned short arr_3 [14] [14] ;
unsigned char arr_4 [14] ;
unsigned char arr_13 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 1372342631U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (short)9106;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)20546;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = -8837427964066367050LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-8785;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)43586;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)113;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
