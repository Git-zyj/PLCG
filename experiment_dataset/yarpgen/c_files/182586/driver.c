#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1828723721U;
unsigned char var_1 = (unsigned char)70;
signed char var_2 = (signed char)121;
unsigned long long int var_3 = 11709859318236884326ULL;
unsigned int var_4 = 2438085897U;
unsigned int var_5 = 1517100971U;
signed char var_7 = (signed char)100;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-45;
unsigned short var_10 = (unsigned short)37056;
unsigned long long int var_11 = 10331440935894207074ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = 2074335477;
unsigned long long int var_14 = 1560961626722569601ULL;
long long int var_15 = -8850286676290549268LL;
unsigned int var_16 = 4050384748U;
long long int var_17 = 3138657308455509226LL;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
int var_20 = 2075751816;
unsigned short arr_0 [16] [16] ;
unsigned short arr_1 [16] ;
unsigned long long int arr_3 [16] [16] [16] ;
unsigned char arr_4 [16] [16] ;
_Bool arr_6 [16] [16] [16] ;
signed char arr_7 [16] [16] [16] [16] ;
unsigned long long int arr_8 [16] [16] [16] ;
_Bool arr_9 [10] ;
unsigned short arr_18 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)45784;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)55859;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4277435434035063936ULL : 13546499623831815575ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-91 : (signed char)-73;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 16396516394698040165ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = (unsigned short)62392;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
