#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11832059327776833312ULL;
unsigned char var_4 = (unsigned char)121;
unsigned int var_5 = 3032326132U;
signed char var_6 = (signed char)-23;
long long int var_7 = -1945199410200735927LL;
unsigned short var_8 = (unsigned short)6203;
unsigned char var_11 = (unsigned char)204;
unsigned char var_12 = (unsigned char)120;
unsigned short var_14 = (unsigned short)11928;
unsigned short var_15 = (unsigned short)42839;
signed char var_16 = (signed char)3;
unsigned long long int var_17 = 18201630187183523455ULL;
unsigned short var_19 = (unsigned short)25208;
int zero = 0;
int var_20 = -1311126543;
unsigned char var_21 = (unsigned char)4;
short var_22 = (short)-10064;
unsigned char var_23 = (unsigned char)119;
signed char var_24 = (signed char)126;
unsigned short var_25 = (unsigned short)233;
long long int var_26 = 8794459689681791115LL;
unsigned long long int var_27 = 4899708217988007251ULL;
long long int var_28 = -4407875619157960748LL;
unsigned int arr_3 [14] [14] ;
_Bool arr_7 [25] ;
signed char arr_8 [25] [25] ;
short arr_9 [25] [25] ;
_Bool arr_4 [14] [14] ;
short arr_10 [25] ;
int arr_11 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 190652920U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-18819;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (short)-3338;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = 1693035177;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
