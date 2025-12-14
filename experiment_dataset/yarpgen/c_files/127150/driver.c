#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)46;
int var_1 = -2145380179;
int var_2 = 633923693;
unsigned long long int var_3 = 9024867613016012685ULL;
signed char var_4 = (signed char)0;
unsigned short var_5 = (unsigned short)17338;
unsigned long long int var_6 = 14487882054938832356ULL;
signed char var_8 = (signed char)36;
unsigned short var_10 = (unsigned short)7080;
int var_11 = -1832320721;
unsigned short var_15 = (unsigned short)1385;
short var_16 = (short)25800;
unsigned short var_17 = (unsigned short)3587;
int zero = 0;
unsigned long long int var_20 = 7584283622615088125ULL;
unsigned short var_21 = (unsigned short)9393;
short var_22 = (short)-23555;
unsigned int var_23 = 3490441174U;
unsigned int var_24 = 25775536U;
signed char var_25 = (signed char)-34;
unsigned long long int var_26 = 14060774576217370392ULL;
unsigned long long int var_27 = 13520788610838715888ULL;
unsigned short var_28 = (unsigned short)18305;
signed char var_29 = (signed char)104;
unsigned char var_30 = (unsigned char)70;
long long int var_31 = 4925549758171591372LL;
signed char arr_1 [11] ;
long long int arr_3 [11] ;
unsigned char arr_5 [11] ;
unsigned short arr_6 [11] [11] ;
int arr_9 [22] ;
int arr_10 [22] ;
unsigned int arr_12 [13] ;
_Bool arr_14 [13] ;
unsigned long long int arr_15 [13] ;
unsigned char arr_21 [13] ;
signed char arr_7 [11] [11] ;
long long int arr_8 [11] ;
int arr_16 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)77;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 5317064281085797378LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)19507;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = -2115427167;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = -970289747;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = 2841110222U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = 1058559452637426928ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_21 [i_0] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-63;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 6966277376484700501LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = 1095447865;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
