#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_3 = 1256011781U;
unsigned int var_6 = 2974373732U;
int var_8 = 872750739;
unsigned long long int var_11 = 16379459296372591617ULL;
unsigned long long int var_12 = 686239833713192021ULL;
long long int var_13 = -6161880064043375599LL;
_Bool var_15 = (_Bool)0;
short var_16 = (short)11978;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)43396;
long long int var_20 = -4574882935587142450LL;
long long int var_21 = 7991058562430593197LL;
int var_22 = 1434101595;
_Bool var_23 = (_Bool)1;
long long int var_24 = -2085069713258516141LL;
signed char var_25 = (signed char)-22;
_Bool var_26 = (_Bool)0;
signed char var_27 = (signed char)-104;
_Bool var_28 = (_Bool)0;
unsigned long long int var_29 = 8023254690739818926ULL;
unsigned int arr_0 [13] [13] ;
_Bool arr_1 [13] [13] ;
signed char arr_2 [15] ;
unsigned long long int arr_3 [15] [15] ;
unsigned short arr_4 [15] ;
unsigned int arr_5 [15] [15] [15] ;
unsigned short arr_6 [15] ;
unsigned char arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 676129103U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)8 : (signed char)-40;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 1047086587537516492ULL : 4844311586019392935ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)55198 : (unsigned short)40777;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3526938938U : 747263056U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)55116 : (unsigned short)8601;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (unsigned char)99;
}

void checksum() {
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
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
