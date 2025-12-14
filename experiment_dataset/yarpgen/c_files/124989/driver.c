#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2667766698622961603LL;
unsigned short var_1 = (unsigned short)57357;
long long int var_2 = 5909825030326039027LL;
unsigned int var_3 = 1308659650U;
unsigned short var_4 = (unsigned short)38631;
int var_5 = 573607014;
unsigned short var_6 = (unsigned short)50412;
unsigned char var_7 = (unsigned char)6;
unsigned short var_8 = (unsigned short)58254;
long long int var_9 = -1008934664854766482LL;
unsigned short var_10 = (unsigned short)25248;
unsigned int var_11 = 790550981U;
unsigned long long int var_12 = 8898258387313625514ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = 1263985325;
long long int var_15 = -8702560408747001162LL;
int var_16 = 2115440537;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 3403095498172569167ULL;
unsigned int var_19 = 26194315U;
unsigned long long int var_20 = 7590752171763294306ULL;
int var_21 = 1847361037;
unsigned long long int var_22 = 11029722741332073770ULL;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)58877;
unsigned char var_25 = (unsigned char)33;
signed char var_26 = (signed char)70;
long long int var_27 = -5379336271102555916LL;
unsigned long long int var_28 = 10411678023889170181ULL;
unsigned short var_29 = (unsigned short)56476;
short var_30 = (short)-10660;
short var_31 = (short)12339;
int var_32 = 396708548;
unsigned int var_33 = 3332860975U;
unsigned long long int var_34 = 8613405478048991244ULL;
unsigned short var_35 = (unsigned short)45917;
_Bool var_36 = (_Bool)1;
_Bool var_37 = (_Bool)0;
unsigned long long int var_38 = 18161977861679658655ULL;
_Bool var_39 = (_Bool)0;
unsigned int var_40 = 282827919U;
unsigned short var_41 = (unsigned short)20284;
int var_42 = 72588640;
_Bool var_43 = (_Bool)1;
_Bool var_44 = (_Bool)1;
unsigned char arr_5 [11] ;
unsigned char arr_6 [11] [11] [11] [11] ;
unsigned char arr_11 [16] [16] ;
_Bool arr_12 [16] [16] ;
unsigned short arr_13 [16] ;
short arr_14 [19] ;
unsigned long long int arr_15 [19] ;
unsigned short arr_20 [19] ;
unsigned int arr_24 [19] [19] [19] ;
long long int arr_25 [19] [19] [19] ;
unsigned short arr_26 [19] [19] [19] [19] ;
unsigned long long int arr_27 [19] ;
unsigned short arr_28 [19] [19] [19] [19] [19] [19] ;
unsigned int arr_32 [19] [19] [19] [19] [19] [19] ;
unsigned char arr_34 [19] [19] ;
unsigned int arr_8 [11] ;
unsigned char arr_18 [19] [19] ;
unsigned long long int arr_36 [19] ;
unsigned char arr_37 [19] [19] [19] [19] ;
signed char arr_40 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)152 : (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (unsigned short)55518;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (short)-22049;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = 2621330343740427418ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_20 [i_0] = (unsigned short)63230;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = 1354606571U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 4406644385257855712LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (unsigned short)39055;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_27 [i_0] = 3208727427594723207ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)20856;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 311754880U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_34 [i_0] [i_1] = (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 342699115U : 3412047684U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_36 [i_0] = 11067882245230353792ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_40 [i_0] [i_1] = (signed char)7;
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
    hash(&seed, var_44);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_37 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_40 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
