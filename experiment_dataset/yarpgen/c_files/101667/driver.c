#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)148;
int var_2 = -1289019798;
unsigned long long int var_3 = 16716234631177442519ULL;
_Bool var_4 = (_Bool)0;
unsigned short var_8 = (unsigned short)36620;
int var_10 = 1594084925;
int var_11 = -1667118124;
unsigned short var_13 = (unsigned short)31271;
int var_14 = -1530357560;
int var_15 = -9299233;
int var_16 = 1126785015;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)35;
unsigned char var_20 = (unsigned char)37;
unsigned char var_21 = (unsigned char)51;
int var_22 = 1410387776;
signed char var_23 = (signed char)-63;
unsigned long long int var_24 = 14038217043369913156ULL;
unsigned char var_25 = (unsigned char)19;
signed char var_26 = (signed char)-17;
_Bool var_27 = (_Bool)1;
unsigned char var_28 = (unsigned char)190;
int var_29 = -305223635;
signed char var_30 = (signed char)-64;
unsigned long long int var_31 = 16459913428559499596ULL;
signed char var_32 = (signed char)-58;
unsigned char var_33 = (unsigned char)43;
unsigned char var_34 = (unsigned char)150;
unsigned short var_35 = (unsigned short)27000;
long long int var_36 = -2455087103197229912LL;
unsigned short var_37 = (unsigned short)2581;
unsigned char var_38 = (unsigned char)161;
unsigned char var_39 = (unsigned char)82;
unsigned short var_40 = (unsigned short)35074;
long long int var_41 = 3268391897304230090LL;
unsigned int var_42 = 1925703466U;
_Bool var_43 = (_Bool)1;
unsigned int arr_0 [12] [12] ;
signed char arr_1 [12] ;
short arr_14 [15] [15] ;
unsigned int arr_15 [15] ;
unsigned long long int arr_18 [15] ;
int arr_22 [15] ;
signed char arr_23 [15] ;
int arr_24 [15] [15] ;
unsigned long long int arr_29 [15] ;
signed char arr_31 [15] [15] ;
signed char arr_34 [15] [15] [15] [15] ;
unsigned char arr_35 [15] [15] ;
short arr_41 [15] [15] ;
unsigned char arr_42 [15] [15] ;
signed char arr_47 [18] ;
unsigned long long int arr_48 [18] ;
long long int arr_49 [14] ;
signed char arr_5 [12] [12] ;
int arr_10 [12] [12] [12] [12] [12] [12] ;
unsigned long long int arr_13 [12] [12] [12] [12] [12] ;
int arr_20 [15] [15] [15] ;
unsigned short arr_21 [15] ;
long long int arr_25 [15] ;
_Bool arr_26 [15] [15] [15] ;
short arr_27 [15] ;
signed char arr_30 [15] ;
_Bool arr_39 [15] [15] ;
long long int arr_59 [14] ;
unsigned int arr_60 [14] [14] ;
signed char arr_61 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 1721539708U : 2082322736U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)67;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = (short)-5041;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = 1973563685U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = 11675735536174580458ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_22 [i_0] = 861600630;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_23 [i_0] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_24 [i_0] [i_1] = -1655374499;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_29 [i_0] = 1936519021886092066ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_31 [i_0] [i_1] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_35 [i_0] [i_1] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_41 [i_0] [i_1] = (short)402;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_42 [i_0] [i_1] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_47 [i_0] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_48 [i_0] = 16518886225764083340ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_49 [i_0] = -5337103707378697688LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)106 : (signed char)-45;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? -1031323035 : 469151960;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 11355566127783758587ULL : 3764744857136474123ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = -1822995148;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_21 [i_0] = (unsigned short)17274;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_25 [i_0] = 6449987217413289478LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_27 [i_0] = (short)-16051;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_30 [i_0] = (signed char)117;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_39 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_59 [i_0] = (i_0 % 2 == 0) ? -336305622408042191LL : -7718084890174210074LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_60 [i_0] [i_1] = (i_0 % 2 == 0) ? 3230526730U : 449367244U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_61 [i_0] = (i_0 % 2 == 0) ? (signed char)88 : (signed char)101;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_39 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_59 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_60 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_61 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
