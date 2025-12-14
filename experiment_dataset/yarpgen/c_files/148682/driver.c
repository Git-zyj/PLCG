#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29282;
short var_2 = (short)-6081;
unsigned char var_4 = (unsigned char)212;
unsigned int var_5 = 2314099216U;
unsigned int var_7 = 3496252744U;
long long int var_8 = -91568516243976292LL;
unsigned int var_10 = 1733447386U;
unsigned int var_11 = 2396883141U;
int var_12 = 274059653;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)149;
unsigned long long int var_15 = 1427954501271698655ULL;
unsigned int var_16 = 462615476U;
short var_17 = (short)-32649;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2613730955U;
int var_20 = 1095622485;
unsigned int var_21 = 2399455009U;
short var_22 = (short)23446;
short var_23 = (short)-26961;
unsigned int var_24 = 324456122U;
short var_25 = (short)20014;
unsigned char var_26 = (unsigned char)103;
unsigned char var_27 = (unsigned char)174;
int var_28 = -2034468411;
short var_29 = (short)-5271;
long long int var_30 = 9207420123453028733LL;
unsigned int var_31 = 3696732043U;
short var_32 = (short)-30795;
short var_33 = (short)471;
short var_34 = (short)28083;
short var_35 = (short)-29142;
short var_36 = (short)-31795;
int var_37 = -452597540;
unsigned short var_38 = (unsigned short)26887;
unsigned int var_39 = 3707703520U;
unsigned long long int var_40 = 9086943321671025535ULL;
unsigned char var_41 = (unsigned char)70;
short var_42 = (short)-27302;
unsigned char var_43 = (unsigned char)130;
unsigned int arr_0 [15] ;
unsigned int arr_2 [15] ;
_Bool arr_3 [15] [15] ;
unsigned short arr_5 [23] [23] ;
unsigned char arr_7 [23] ;
_Bool arr_9 [23] ;
unsigned int arr_10 [23] [23] [23] ;
unsigned int arr_11 [23] [23] [23] [23] ;
unsigned int arr_12 [23] [23] [23] [23] ;
_Bool arr_17 [20] ;
unsigned short arr_24 [20] ;
unsigned long long int arr_25 [20] ;
unsigned long long int arr_46 [14] [14] ;
_Bool arr_47 [14] ;
unsigned int arr_49 [14] ;
unsigned int arr_54 [14] [14] ;
long long int arr_4 [15] ;
unsigned int arr_8 [23] ;
signed char arr_13 [23] [23] [23] ;
long long int arr_16 [23] ;
long long int arr_36 [20] [20] [20] [20] [20] [20] [20] ;
unsigned short arr_37 [20] [20] ;
int arr_42 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1762662927U : 1488503071U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 3684871771U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)28735;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 908594366U : 3576767476U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 1706473451U : 2892205880U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2949519206U : 1549511055U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_24 [i_0] = (unsigned short)31948;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_25 [i_0] = 6671829219954460660ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_46 [i_0] [i_1] = 7378243304027234802ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_47 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_49 [i_0] = 3802667544U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_54 [i_0] [i_1] = 3904167303U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 4675593152424616923LL : 3057379344048650526LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 3548207951U : 2542973290U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)21 : (signed char)-108;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 1103601096866734094LL : -5391259185289848927LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 20; ++i_6) 
                                arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_4 % 2 == 0) ? 908306680382174535LL : -8691793878065275898LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_37 [i_0] [i_1] = (unsigned short)27747;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_42 [i_0] = 1384076964;
}

void checksum() {
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
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 20; ++i_6) 
                                hash(&seed, arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_42 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
