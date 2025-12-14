#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6058780073392017721LL;
unsigned short var_4 = (unsigned short)64112;
signed char var_7 = (signed char)66;
int var_8 = -264591773;
short var_9 = (short)3219;
signed char var_10 = (signed char)125;
short var_11 = (short)-20047;
long long int var_12 = 3311614135564775878LL;
short var_13 = (short)-13;
unsigned short var_15 = (unsigned short)51715;
int var_17 = -782291250;
unsigned short var_18 = (unsigned short)4197;
int zero = 0;
short var_20 = (short)26053;
int var_21 = -152462941;
int var_22 = 1002389798;
short var_23 = (short)-23088;
long long int var_24 = -8053517082321902467LL;
signed char var_25 = (signed char)-81;
short var_26 = (short)-36;
int var_27 = 858084018;
short var_28 = (short)20470;
_Bool var_29 = (_Bool)1;
unsigned short var_30 = (unsigned short)2152;
unsigned short var_31 = (unsigned short)57949;
unsigned short var_32 = (unsigned short)16059;
unsigned short var_33 = (unsigned short)52211;
long long int var_34 = -6050385987690678189LL;
short var_35 = (short)14077;
signed char var_36 = (signed char)67;
long long int var_37 = -5894069713887718194LL;
int var_38 = -1789383734;
unsigned short var_39 = (unsigned short)44852;
unsigned short var_40 = (unsigned short)4012;
short var_41 = (short)-5195;
unsigned short var_42 = (unsigned short)56343;
short var_43 = (short)24477;
int var_44 = 643265777;
short var_45 = (short)-7969;
int var_46 = 532779614;
int var_47 = 2098044386;
unsigned short var_48 = (unsigned short)26789;
short arr_0 [23] [23] ;
unsigned short arr_1 [23] ;
unsigned short arr_2 [23] ;
unsigned short arr_3 [23] ;
short arr_4 [23] [23] [23] ;
int arr_5 [23] [23] ;
unsigned short arr_7 [23] [23] [23] ;
_Bool arr_8 [23] [23] ;
int arr_15 [18] [18] ;
short arr_23 [18] [18] [18] [18] [18] [18] ;
unsigned short arr_29 [20] ;
int arr_30 [20] ;
int arr_33 [13] [13] ;
unsigned short arr_6 [23] [23] [23] ;
_Bool arr_12 [23] ;
short arr_42 [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (short)5679;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)30;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)51350;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)39894;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)5354 : (short)-634;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? -171332340 : 450857611;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)17509;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_15 [i_0] [i_1] = -1991897092;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-16993;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_29 [i_0] = (unsigned short)25152;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? 307725357 : 1059161689;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_33 [i_0] [i_1] = 1909829344;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)2297 : (unsigned short)57298;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-14978;
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
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
