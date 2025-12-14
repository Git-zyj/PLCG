#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19298;
unsigned char var_1 = (unsigned char)181;
unsigned int var_2 = 141877849U;
unsigned short var_3 = (unsigned short)811;
unsigned int var_4 = 620523538U;
_Bool var_5 = (_Bool)0;
int var_6 = 496965012;
unsigned short var_7 = (unsigned short)47632;
short var_8 = (short)-4622;
int var_9 = -1581459939;
short var_10 = (short)19067;
int zero = 0;
unsigned char var_11 = (unsigned char)83;
unsigned short var_12 = (unsigned short)43884;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-18277;
short var_15 = (short)16341;
unsigned int var_16 = 1497122137U;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)224;
signed char var_19 = (signed char)-99;
unsigned char arr_0 [22] [22] ;
short arr_1 [22] [22] ;
short arr_3 [17] ;
unsigned char arr_6 [17] [17] ;
int arr_7 [17] ;
unsigned short arr_5 [17] ;
unsigned char arr_8 [17] ;
short arr_9 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-30211;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (short)28682;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = -1331274785;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned short)28095;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (short)29547;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
