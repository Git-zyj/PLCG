#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2282;
long long int var_1 = -1492191639991780285LL;
unsigned char var_2 = (unsigned char)66;
unsigned int var_3 = 134253028U;
unsigned char var_4 = (unsigned char)7;
unsigned short var_5 = (unsigned short)29202;
unsigned short var_6 = (unsigned short)37186;
unsigned long long int var_7 = 15905385793105828315ULL;
unsigned char var_8 = (unsigned char)182;
signed char var_9 = (signed char)-93;
signed char var_11 = (signed char)-109;
unsigned short var_12 = (unsigned short)2792;
short var_13 = (short)-7351;
int var_14 = -2035833700;
int var_16 = 2075770955;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 1868126637U;
signed char var_19 = (signed char)-49;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-38;
unsigned long long int var_22 = 526663775392755001ULL;
int var_23 = -961685216;
unsigned int var_24 = 762429908U;
unsigned short var_25 = (unsigned short)52746;
long long int var_26 = 4628147532383270814LL;
unsigned long long int var_27 = 1040319134726366144ULL;
long long int var_28 = 8752591052884462261LL;
unsigned int var_29 = 1909865592U;
unsigned long long int var_30 = 15840283730127403935ULL;
unsigned char var_31 = (unsigned char)185;
signed char var_32 = (signed char)-48;
signed char var_33 = (signed char)101;
short var_34 = (short)-3776;
long long int var_35 = 3856810567633218778LL;
unsigned short var_36 = (unsigned short)7462;
unsigned long long int var_37 = 12689873304902767646ULL;
_Bool var_38 = (_Bool)1;
short var_39 = (short)-5352;
unsigned short var_40 = (unsigned short)51551;
_Bool var_41 = (_Bool)1;
_Bool var_42 = (_Bool)1;
unsigned short var_43 = (unsigned short)64430;
short var_44 = (short)-12345;
signed char var_45 = (signed char)4;
_Bool var_46 = (_Bool)1;
unsigned char var_47 = (unsigned char)251;
short var_48 = (short)23302;
signed char var_49 = (signed char)70;
unsigned char var_50 = (unsigned char)77;
short var_51 = (short)-20636;
unsigned short var_52 = (unsigned short)55265;
signed char var_53 = (signed char)-52;
unsigned long long int var_54 = 17302382563205717465ULL;
unsigned long long int var_55 = 14908905705375493373ULL;
unsigned char var_56 = (unsigned char)232;
unsigned long long int arr_0 [15] ;
unsigned long long int arr_2 [15] [15] [15] ;
unsigned short arr_4 [15] [15] [15] ;
short arr_5 [15] [15] [15] ;
signed char arr_6 [15] [15] [15] [15] ;
unsigned long long int arr_8 [15] [15] [15] [15] ;
_Bool arr_9 [15] ;
unsigned short arr_16 [15] [15] [15] [15] [15] [15] ;
signed char arr_20 [22] ;
_Bool arr_22 [22] [22] ;
unsigned char arr_24 [22] ;
short arr_25 [22] [22] [22] ;
unsigned long long int arr_27 [22] ;
_Bool arr_33 [22] [22] [22] [22] ;
unsigned char arr_35 [22] [22] [22] [22] [22] ;
int arr_41 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 3883690439037369767ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 2718556822795808989ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)14541 : (unsigned short)4297;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-21928;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 10497417993071365183ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (unsigned short)58531 : (unsigned short)17501;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = (signed char)-78;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_22 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_24 [i_0] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (short)-27341;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_27 [i_0] = 14896250786480535441ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned char)73 : (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_41 [i_0] = 1660479551;
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
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
