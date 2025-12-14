#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)46;
long long int var_3 = -3808561474593763750LL;
unsigned int var_4 = 3167328045U;
unsigned char var_5 = (unsigned char)146;
unsigned short var_6 = (unsigned short)50079;
long long int var_7 = 469998426648251307LL;
signed char var_8 = (signed char)91;
unsigned short var_9 = (unsigned short)3158;
short var_10 = (short)22477;
unsigned short var_11 = (unsigned short)22340;
unsigned long long int var_12 = 8747602753482773144ULL;
unsigned char var_13 = (unsigned char)80;
unsigned int var_14 = 808161672U;
int var_15 = 656126289;
long long int var_16 = -5362641302145493573LL;
unsigned char var_17 = (unsigned char)57;
long long int var_18 = 8658147250082360289LL;
unsigned char var_19 = (unsigned char)50;
int zero = 0;
unsigned char var_20 = (unsigned char)121;
long long int var_21 = -2753722464077342084LL;
long long int var_22 = -3066606675067017328LL;
unsigned short var_23 = (unsigned short)59560;
signed char var_24 = (signed char)-91;
unsigned char var_25 = (unsigned char)16;
long long int var_26 = -2797719110739452512LL;
unsigned short var_27 = (unsigned short)17198;
short var_28 = (short)-4913;
unsigned short var_29 = (unsigned short)42446;
unsigned char var_30 = (unsigned char)32;
unsigned long long int var_31 = 8521550884094859963ULL;
unsigned long long int var_32 = 11476935253618594753ULL;
unsigned long long int var_33 = 14647746206117888797ULL;
long long int var_34 = -2091725027429315787LL;
unsigned int var_35 = 3057128789U;
int var_36 = -377944415;
long long int var_37 = -6879224864663186993LL;
unsigned short var_38 = (unsigned short)17987;
long long int arr_5 [16] [16] [16] ;
int arr_6 [16] [16] ;
long long int arr_23 [10] [10] [10] ;
int arr_34 [10] [10] [10] [10] [10] [10] ;
short arr_35 [10] ;
unsigned char arr_38 [22] [22] ;
long long int arr_42 [16] ;
int arr_46 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 212901485737328538LL : 1528387919289253741LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 564500652 : -1040634217;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 4079104429117816395LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1659434578;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_35 [i_0] = (short)23949;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_38 [i_0] [i_1] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_42 [i_0] = (i_0 % 2 == 0) ? -6319161030666642957LL : 1105414011267066805LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_46 [i_0] [i_1] = 687006560;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            hash(&seed, arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_38 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_42 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_46 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
