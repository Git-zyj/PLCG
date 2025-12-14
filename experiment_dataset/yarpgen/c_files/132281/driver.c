#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38198;
long long int var_1 = -4233712842290723227LL;
signed char var_2 = (signed char)-55;
signed char var_3 = (signed char)126;
short var_4 = (short)7798;
int var_5 = -2022897636;
short var_6 = (short)9524;
int var_7 = -1972088298;
unsigned short var_8 = (unsigned short)27269;
unsigned int var_9 = 25912118U;
int zero = 0;
int var_10 = -2107899008;
int var_11 = -315122341;
unsigned long long int var_12 = 2522209179958146350ULL;
short var_13 = (short)-6097;
short var_14 = (short)32587;
signed char var_15 = (signed char)54;
unsigned long long int var_16 = 18379680585468708656ULL;
unsigned short var_17 = (unsigned short)27103;
unsigned int var_18 = 1285457460U;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-4;
unsigned long long int var_21 = 7889476870045759048ULL;
unsigned char var_22 = (unsigned char)148;
long long int var_23 = -8856501891551685343LL;
long long int var_24 = 1914429618314873739LL;
unsigned char var_25 = (unsigned char)55;
unsigned long long int var_26 = 3483959421363192051ULL;
unsigned short var_27 = (unsigned short)1745;
signed char var_28 = (signed char)-32;
unsigned short var_29 = (unsigned short)11392;
_Bool var_30 = (_Bool)0;
short var_31 = (short)416;
unsigned short var_32 = (unsigned short)48438;
long long int var_33 = -5218497128158110068LL;
signed char var_34 = (signed char)-21;
unsigned long long int arr_0 [11] ;
unsigned char arr_1 [11] ;
unsigned char arr_2 [11] [11] [11] ;
short arr_3 [11] [11] ;
unsigned char arr_5 [11] [11] [11] ;
long long int arr_6 [11] ;
unsigned long long int arr_8 [11] ;
unsigned char arr_10 [11] [11] ;
long long int arr_12 [11] ;
long long int arr_14 [11] [11] ;
unsigned char arr_15 [11] ;
unsigned char arr_18 [11] [11] [11] ;
signed char arr_23 [11] [11] ;
long long int arr_25 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 8948180736637395010ULL : 17768058361238690377ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)225 : (unsigned char)250;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-18829;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -7182969848224996184LL : 5532142845398518053LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 12984628110255048211ULL : 14279684362246359442ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)83 : (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = -2234256352273912675LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_14 [i_0] [i_1] = 8101648819611854991LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)43 : (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_23 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-100 : (signed char)-47;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = -1545984929411344413LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
