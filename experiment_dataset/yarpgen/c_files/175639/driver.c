#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-69;
short var_3 = (short)-6943;
signed char var_4 = (signed char)113;
signed char var_5 = (signed char)-90;
unsigned long long int var_6 = 17207829894945454302ULL;
unsigned int var_8 = 2755217928U;
unsigned char var_9 = (unsigned char)194;
unsigned char var_11 = (unsigned char)167;
unsigned long long int var_12 = 14526847104249772040ULL;
short var_13 = (short)16947;
short var_14 = (short)-31766;
int var_16 = -824400697;
long long int var_17 = -4813258821634218976LL;
int zero = 0;
signed char var_18 = (signed char)12;
unsigned long long int var_19 = 1749082505454275714ULL;
int var_20 = -1068883037;
long long int var_21 = -5112224380722732083LL;
unsigned short var_22 = (unsigned short)62639;
signed char var_23 = (signed char)44;
unsigned int var_24 = 3879787704U;
long long int var_25 = 2798746099661392516LL;
unsigned short var_26 = (unsigned short)23597;
unsigned char var_27 = (unsigned char)191;
short var_28 = (short)8608;
long long int var_29 = 6898149573682210432LL;
unsigned short var_30 = (unsigned short)18288;
_Bool var_31 = (_Bool)1;
unsigned char var_32 = (unsigned char)145;
unsigned short var_33 = (unsigned short)46429;
long long int var_34 = 1065102363568126361LL;
long long int arr_1 [20] ;
long long int arr_3 [16] ;
signed char arr_7 [16] [16] [16] ;
short arr_11 [16] ;
unsigned char arr_20 [16] [16] [16] [16] [16] [16] [16] ;
unsigned short arr_24 [19] [19] ;
_Bool arr_25 [19] ;
unsigned char arr_33 [22] ;
long long int arr_2 [20] [20] ;
unsigned char arr_10 [16] [16] ;
long long int arr_23 [16] [16] ;
signed char arr_28 [19] ;
unsigned char arr_36 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 7470249181524751667LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -4773531250032459281LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-66;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (short)15441 : (short)-14197;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_24 [i_0] [i_1] = (unsigned short)40805;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_33 [i_0] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 1837545800542479389LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)232 : (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_23 [i_0] [i_1] = (i_0 % 2 == 0) ? -6160694536470277526LL : -3452592536055316394LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? (signed char)46 : (signed char)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_36 [i_0] [i_1] = (unsigned char)182;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_36 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
