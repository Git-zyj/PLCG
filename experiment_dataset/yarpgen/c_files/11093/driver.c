#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1351334417U;
unsigned char var_1 = (unsigned char)122;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)35652;
unsigned short var_4 = (unsigned short)3679;
unsigned int var_5 = 3186659630U;
unsigned long long int var_6 = 17024742469155373227ULL;
signed char var_8 = (signed char)-94;
unsigned int var_10 = 3806774986U;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)255;
unsigned long long int var_16 = 10593024206757365637ULL;
short var_17 = (short)-10698;
unsigned char var_18 = (unsigned char)62;
signed char var_19 = (signed char)63;
unsigned short var_20 = (unsigned short)39038;
_Bool var_21 = (_Bool)1;
unsigned short arr_0 [13] [13] ;
unsigned int arr_1 [13] ;
unsigned char arr_2 [13] ;
unsigned int arr_4 [21] [21] ;
unsigned short arr_5 [21] [21] ;
_Bool arr_6 [21] [21] ;
unsigned int arr_3 [13] ;
unsigned short arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)52401;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 4163611098U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = 4071592800U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)30099;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 915774573U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)59523 : (unsigned short)35611;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
