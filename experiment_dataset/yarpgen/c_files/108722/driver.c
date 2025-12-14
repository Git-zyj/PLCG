#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20144;
short var_1 = (short)6453;
unsigned char var_2 = (unsigned char)212;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 14666075523293231629ULL;
signed char var_5 = (signed char)12;
int var_6 = -1975495583;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 5784497026055622160ULL;
unsigned int var_9 = 1148685038U;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)209;
unsigned short var_12 = (unsigned short)55376;
unsigned int var_13 = 3803479133U;
unsigned long long int var_14 = 6797444490611908865ULL;
unsigned char var_15 = (unsigned char)232;
int zero = 0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)33;
unsigned char var_19 = (unsigned char)15;
unsigned char var_20 = (unsigned char)178;
unsigned char var_21 = (unsigned char)62;
signed char var_22 = (signed char)-39;
short var_23 = (short)2566;
short var_24 = (short)17805;
short var_25 = (short)7360;
unsigned long long int var_26 = 17211661361036444670ULL;
unsigned char var_27 = (unsigned char)197;
short var_28 = (short)-20764;
_Bool var_29 = (_Bool)1;
signed char var_30 = (signed char)52;
int var_31 = -924561164;
int var_32 = -182259616;
short var_33 = (short)-8775;
unsigned int var_34 = 3860500781U;
unsigned long long int var_35 = 3589604407875130755ULL;
signed char var_36 = (signed char)111;
unsigned int arr_0 [18] [18] ;
_Bool arr_1 [18] ;
int arr_2 [18] ;
int arr_4 [18] ;
unsigned char arr_6 [18] [18] ;
unsigned int arr_7 [18] ;
unsigned char arr_8 [18] ;
short arr_10 [18] [18] ;
short arr_12 [18] [18] [18] ;
signed char arr_18 [11] ;
int arr_22 [11] [11] ;
unsigned short arr_26 [11] ;
_Bool arr_28 [22] ;
unsigned long long int arr_29 [22] [22] ;
unsigned char arr_32 [22] [22] [22] ;
_Bool arr_33 [22] [22] [22] [22] ;
unsigned long long int arr_34 [22] ;
unsigned short arr_5 [18] ;
long long int arr_16 [18] ;
unsigned long long int arr_20 [11] ;
unsigned long long int arr_27 [11] ;
signed char arr_30 [22] ;
int arr_36 [22] [22] [22] ;
signed char arr_37 [22] ;
unsigned int arr_38 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 1953512488U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 404696365;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 1271331003;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 2561467957U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (short)6788;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (short)-11397;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_18 [i_0] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_22 [i_0] [i_1] = -1250588260;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_26 [i_0] = (unsigned short)30763;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_28 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_29 [i_0] [i_1] = 17950572443176304601ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_34 [i_0] = 14968293066788440015ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned short)2843;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? -3635509478215844086LL : 7728415994225396510LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_20 [i_0] = 16370556457552782455ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_27 [i_0] = 17339064908959376232ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_30 [i_0] = (signed char)96;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = -320432275;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_37 [i_0] = (signed char)68;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_38 [i_0] [i_1] = 178802277U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_36 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_38 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
