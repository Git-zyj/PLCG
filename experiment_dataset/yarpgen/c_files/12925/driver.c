#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)101;
int var_1 = 954490045;
unsigned long long int var_2 = 4214285532788617646ULL;
unsigned int var_3 = 2892613367U;
signed char var_4 = (signed char)101;
_Bool var_5 = (_Bool)1;
int var_6 = -1081619414;
int var_7 = 353222799;
short var_8 = (short)-6282;
signed char var_9 = (signed char)100;
unsigned int var_10 = 4249351683U;
short var_11 = (short)30968;
long long int var_12 = 1244558986964932731LL;
short var_14 = (short)-10519;
int zero = 0;
unsigned int var_15 = 591150572U;
unsigned char var_16 = (unsigned char)99;
short var_17 = (short)4121;
unsigned int var_18 = 579816780U;
unsigned short var_19 = (unsigned short)8331;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
long long int var_22 = -863007217917904703LL;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)1;
unsigned short var_25 = (unsigned short)35752;
_Bool var_26 = (_Bool)0;
int var_27 = -453200456;
unsigned char var_28 = (unsigned char)152;
unsigned int var_29 = 4041023365U;
unsigned short var_30 = (unsigned short)4956;
unsigned int var_31 = 855786700U;
signed char var_32 = (signed char)-118;
unsigned int var_33 = 1376920660U;
signed char var_34 = (signed char)-106;
int var_35 = -376742252;
unsigned int var_36 = 3605807535U;
unsigned int var_37 = 2024832021U;
signed char var_38 = (signed char)-70;
unsigned char var_39 = (unsigned char)240;
_Bool var_40 = (_Bool)0;
unsigned int var_41 = 98460631U;
unsigned int arr_0 [17] ;
unsigned short arr_1 [17] ;
short arr_2 [17] [17] ;
unsigned short arr_3 [17] [17] ;
_Bool arr_4 [17] [17] ;
unsigned int arr_5 [17] ;
unsigned int arr_6 [17] ;
long long int arr_8 [17] [17] ;
unsigned int arr_16 [17] [17] [17] ;
unsigned char arr_19 [17] [17] [17] [17] ;
signed char arr_23 [17] [17] ;
unsigned int arr_26 [17] ;
unsigned int arr_24 [17] ;
unsigned short arr_31 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 2649816551U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)29539;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (short)2575;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)18195;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 3306053966U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 2939990853U : 1016031848U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = 3982510048900173030LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 1807303925U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)8 : (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_23 [i_0] [i_1] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_26 [i_0] = 878091176U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_24 [i_0] = 3726816194U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_31 [i_0] [i_1] = (unsigned short)15078;
}

void checksum() {
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
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
