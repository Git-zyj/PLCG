#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)46;
short var_4 = (short)-32201;
unsigned long long int var_5 = 11605257099345322530ULL;
signed char var_7 = (signed char)-59;
unsigned long long int var_8 = 13599572957267742599ULL;
unsigned long long int var_9 = 16741441032649797428ULL;
_Bool var_10 = (_Bool)1;
int var_11 = 249916419;
unsigned long long int var_12 = 16149745086208112715ULL;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)61;
signed char var_15 = (signed char)-33;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 5245617824881364966ULL;
unsigned char var_19 = (unsigned char)227;
int zero = 0;
unsigned long long int var_20 = 16772587474075422034ULL;
signed char var_21 = (signed char)52;
unsigned long long int var_22 = 1042820937473342850ULL;
int var_23 = 670095935;
int var_24 = -255740913;
_Bool var_25 = (_Bool)1;
unsigned long long int var_26 = 4063697324496366361ULL;
unsigned long long int var_27 = 13112644532040137123ULL;
unsigned long long int var_28 = 8440940869667651304ULL;
int var_29 = -1248622815;
unsigned long long int var_30 = 11474179949048829789ULL;
unsigned char var_31 = (unsigned char)28;
signed char var_32 = (signed char)68;
unsigned long long int var_33 = 5318716309063758465ULL;
signed char var_34 = (signed char)-116;
unsigned char var_35 = (unsigned char)101;
unsigned long long int var_36 = 4201298402863955164ULL;
_Bool var_37 = (_Bool)0;
signed char var_38 = (signed char)-105;
unsigned char var_39 = (unsigned char)107;
int var_40 = -599915254;
unsigned char var_41 = (unsigned char)194;
int var_42 = -488601759;
int var_43 = -123482802;
signed char arr_0 [16] [16] ;
int arr_1 [16] ;
int arr_3 [22] [22] ;
_Bool arr_4 [22] ;
unsigned long long int arr_6 [22] ;
int arr_7 [22] ;
int arr_8 [22] [22] [22] ;
signed char arr_10 [22] [22] ;
signed char arr_11 [22] ;
unsigned long long int arr_12 [14] [14] ;
unsigned long long int arr_13 [14] ;
signed char arr_20 [14] [14] [14] ;
signed char arr_26 [22] ;
short arr_28 [22] [22] [22] ;
short arr_2 [16] ;
_Bool arr_9 [22] [22] ;
unsigned long long int arr_14 [14] ;
signed char arr_17 [14] [14] [14] ;
int arr_18 [14] [14] [14] ;
_Bool arr_24 [14] ;
_Bool arr_30 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)93;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -1525226379;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 1970206853;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 4938742955031581732ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = -1515390395;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 105061855;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)31;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = 16367283274840668838ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = 17821197906963397601ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (signed char)116;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_26 [i_0] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (short)24170;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)-16607;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = 1619813956103747795ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = -1700508663;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_24 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_30 [i_0] [i_1] = (_Bool)0;
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
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
