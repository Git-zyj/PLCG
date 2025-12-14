#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3807229237U;
short var_2 = (short)7317;
short var_3 = (short)16672;
long long int var_4 = 796666694832840750LL;
int var_6 = 263645836;
unsigned char var_7 = (unsigned char)46;
unsigned char var_10 = (unsigned char)191;
unsigned int var_12 = 3465157653U;
unsigned long long int var_13 = 9914624669387565831ULL;
short var_14 = (short)18707;
unsigned int var_15 = 2973894601U;
unsigned long long int var_16 = 5940288500763737354ULL;
int zero = 0;
unsigned int var_17 = 574764327U;
int var_18 = 1355199639;
short var_19 = (short)13211;
unsigned short var_20 = (unsigned short)14133;
long long int var_21 = -8070793136407358154LL;
signed char var_22 = (signed char)41;
unsigned long long int var_23 = 11544315545701394878ULL;
unsigned int var_24 = 1221817816U;
int var_25 = 1938028514;
_Bool var_26 = (_Bool)0;
unsigned long long int var_27 = 5333229179443778621ULL;
signed char var_28 = (signed char)-1;
_Bool var_29 = (_Bool)1;
unsigned short var_30 = (unsigned short)51006;
unsigned int var_31 = 2510081554U;
short var_32 = (short)2510;
signed char var_33 = (signed char)79;
unsigned char var_34 = (unsigned char)63;
unsigned char var_35 = (unsigned char)119;
_Bool var_36 = (_Bool)0;
_Bool arr_0 [12] ;
int arr_1 [12] ;
long long int arr_3 [12] [12] ;
unsigned long long int arr_5 [12] ;
short arr_6 [12] [12] [12] ;
int arr_10 [12] [12] [12] [12] [12] ;
unsigned int arr_19 [12] ;
short arr_35 [19] ;
unsigned long long int arr_36 [19] [19] ;
unsigned int arr_37 [19] ;
unsigned char arr_11 [12] ;
unsigned short arr_12 [12] [12] [12] ;
int arr_15 [12] [12] ;
unsigned long long int arr_20 [12] [12] ;
long long int arr_21 [12] ;
unsigned char arr_28 [12] [12] [12] ;
unsigned long long int arr_38 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 1511639684;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 4977993338562485660LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 12055037354180923848ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)28073;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? -2128677597 : 1287086768;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = 1329817973U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_35 [i_0] = (short)2619;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_36 [i_0] [i_1] = 4313705026007100203ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_37 [i_0] = 3804382185U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)251 : (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned short)37357;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_15 [i_0] [i_1] = 1056386590;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_20 [i_0] [i_1] = 14780560397570463804ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_21 [i_0] = 6575934965219910300LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)123 : (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_38 [i_0] = 15291436725418490381ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_28 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_38 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
