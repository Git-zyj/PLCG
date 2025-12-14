#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)69;
int var_1 = 395255503;
unsigned int var_2 = 2953280321U;
unsigned int var_3 = 658741358U;
signed char var_4 = (signed char)11;
short var_6 = (short)8455;
signed char var_7 = (signed char)-122;
signed char var_8 = (signed char)59;
unsigned int var_9 = 1442685408U;
short var_10 = (short)22300;
int zero = 0;
short var_12 = (short)22440;
unsigned int var_13 = 2060935458U;
unsigned int var_14 = 2412722172U;
unsigned int var_15 = 1234472127U;
unsigned char var_16 = (unsigned char)162;
long long int var_17 = -1330273762136319285LL;
unsigned char var_18 = (unsigned char)202;
short var_19 = (short)-1583;
unsigned short var_20 = (unsigned short)42151;
unsigned char var_21 = (unsigned char)99;
long long int var_22 = -4185481229059474570LL;
signed char var_23 = (signed char)-17;
unsigned long long int var_24 = 13336013082745909060ULL;
unsigned char var_25 = (unsigned char)30;
unsigned long long int var_26 = 16767136261970357279ULL;
unsigned long long int var_27 = 6234512486366448919ULL;
unsigned char var_28 = (unsigned char)123;
long long int var_29 = -2650352740767890645LL;
unsigned long long int var_30 = 2251615500635365568ULL;
int var_31 = -1883216613;
int var_32 = -2131085298;
long long int var_33 = 3788094459701174415LL;
unsigned int var_34 = 570357264U;
int arr_0 [15] ;
unsigned long long int arr_1 [15] ;
long long int arr_2 [15] [15] [15] ;
unsigned long long int arr_3 [15] [15] [15] ;
unsigned char arr_6 [15] [15] [15] [15] ;
unsigned int arr_8 [15] [15] [15] [15] [15] [15] ;
unsigned int arr_10 [21] ;
_Bool arr_11 [21] ;
signed char arr_13 [21] [21] ;
unsigned short arr_14 [21] ;
unsigned char arr_17 [21] ;
short arr_18 [21] [21] [21] ;
int arr_20 [19] [19] ;
int arr_21 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -820514102;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 6307279291713481672ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1868312158855589473LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 15840317355382621786ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 3590585367U : 3140157724U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = 1922377039U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)-16;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (unsigned short)51160 : (unsigned short)36918;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (short)-2566;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_20 [i_0] [i_1] = 992459199;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 1223019424 : 1755644362;
}

void checksum() {
    hash(&seed, var_12);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
