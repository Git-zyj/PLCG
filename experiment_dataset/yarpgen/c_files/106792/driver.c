#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33666;
int var_1 = 1215139293;
long long int var_2 = 2022517314047864660LL;
unsigned int var_3 = 4224189399U;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-9771;
unsigned short var_8 = (unsigned short)14979;
long long int var_9 = 4572090110624570983LL;
short var_10 = (short)-23419;
long long int var_11 = 4566039858277300492LL;
unsigned long long int var_12 = 1512851387562888974ULL;
unsigned short var_13 = (unsigned short)9431;
int zero = 0;
unsigned char var_14 = (unsigned char)87;
int var_15 = 1875858284;
unsigned short var_16 = (unsigned short)20048;
unsigned int var_17 = 730030230U;
unsigned char var_18 = (unsigned char)12;
short var_19 = (short)-22238;
long long int var_20 = 7413949408951326127LL;
signed char var_21 = (signed char)49;
unsigned char var_22 = (unsigned char)211;
unsigned short var_23 = (unsigned short)30105;
unsigned int var_24 = 2209696143U;
short var_25 = (short)23255;
short var_26 = (short)31521;
int var_27 = 350541849;
int var_28 = -497849299;
unsigned long long int var_29 = 9584220719346703466ULL;
unsigned int var_30 = 331648265U;
short var_31 = (short)-17752;
unsigned long long int var_32 = 4349255766422060894ULL;
short var_33 = (short)5444;
short var_34 = (short)-9843;
int var_35 = 408289537;
unsigned char var_36 = (unsigned char)67;
long long int var_37 = 2795019617490218177LL;
signed char var_38 = (signed char)13;
int arr_0 [15] [15] ;
short arr_1 [15] [15] ;
int arr_2 [15] ;
unsigned short arr_4 [10] ;
unsigned char arr_10 [10] ;
unsigned short arr_11 [10] ;
int arr_13 [10] [10] [10] ;
unsigned char arr_15 [10] [10] [10] [10] [10] ;
unsigned char arr_16 [10] [10] [10] ;
short arr_21 [12] ;
unsigned char arr_20 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? -901022763 : 379406239;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)197 : (short)-11059;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -1940309756 : 1411441196;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned short)52072;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (unsigned short)1082;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1629675659 : 195268060;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned char)49 : (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_21 [i_0] = (short)16159;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)22 : (unsigned char)132;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
