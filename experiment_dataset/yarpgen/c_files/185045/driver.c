#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8630;
unsigned short var_1 = (unsigned short)62301;
unsigned long long int var_5 = 3371784808972542661ULL;
_Bool var_6 = (_Bool)0;
long long int var_7 = -771461493476868302LL;
int var_8 = -1929801667;
unsigned short var_9 = (unsigned short)47325;
unsigned char var_11 = (unsigned char)22;
unsigned int var_12 = 1809101346U;
unsigned int var_13 = 1008058174U;
unsigned char var_14 = (unsigned char)114;
unsigned long long int var_16 = 18195862466466878207ULL;
unsigned char var_17 = (unsigned char)221;
unsigned int var_18 = 514202852U;
int zero = 0;
int var_20 = -770387335;
unsigned short var_21 = (unsigned short)7121;
signed char var_22 = (signed char)-125;
int var_23 = -1696282574;
unsigned short var_24 = (unsigned short)4549;
unsigned char var_25 = (unsigned char)206;
unsigned int var_26 = 4054949875U;
int var_27 = -1012905705;
long long int var_28 = 5273240887346938675LL;
unsigned int var_29 = 1222681395U;
unsigned int var_30 = 1320847571U;
short var_31 = (short)-1491;
unsigned int var_32 = 3480442826U;
unsigned char var_33 = (unsigned char)94;
unsigned int var_34 = 3009743203U;
_Bool arr_1 [21] ;
signed char arr_7 [21] [21] [21] ;
_Bool arr_12 [21] [21] ;
unsigned short arr_13 [21] [21] ;
int arr_18 [16] [16] ;
short arr_10 [21] ;
int arr_14 [21] [21] ;
unsigned char arr_21 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)100 : (signed char)46;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)13399;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_18 [i_0] [i_1] = -2100868656;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (short)9645 : (short)28239;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = -994122600;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (unsigned char)139 : (unsigned char)162;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
