#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24394;
unsigned char var_3 = (unsigned char)43;
signed char var_4 = (signed char)-10;
unsigned char var_6 = (unsigned char)66;
int var_7 = -71864498;
signed char var_8 = (signed char)-120;
short var_9 = (short)2953;
unsigned int var_10 = 4014294769U;
int var_11 = 557689310;
int var_12 = -369968751;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-18808;
unsigned long long int var_16 = 7153942279467049066ULL;
int zero = 0;
int var_18 = 1649819891;
unsigned long long int var_19 = 10376414692857634710ULL;
unsigned char var_20 = (unsigned char)106;
short var_21 = (short)-18609;
long long int var_22 = 6513467752503321958LL;
unsigned char var_23 = (unsigned char)239;
unsigned long long int var_24 = 8994975795108314754ULL;
signed char var_25 = (signed char)-102;
_Bool var_26 = (_Bool)0;
unsigned int var_27 = 2862696703U;
_Bool var_28 = (_Bool)0;
signed char var_29 = (signed char)64;
signed char var_30 = (signed char)-36;
short var_31 = (short)-13456;
short var_32 = (short)23572;
unsigned long long int var_33 = 13971234048557775689ULL;
short var_34 = (short)5850;
short var_35 = (short)6324;
short var_36 = (short)-19921;
_Bool var_37 = (_Bool)1;
signed char var_38 = (signed char)-56;
unsigned char var_39 = (unsigned char)22;
unsigned char var_40 = (unsigned char)220;
short var_41 = (short)18230;
int var_42 = -1454831125;
signed char var_43 = (signed char)-73;
long long int var_44 = -6280762727537260037LL;
int arr_2 [19] ;
unsigned short arr_3 [19] ;
unsigned long long int arr_4 [19] [19] [19] ;
unsigned char arr_10 [19] [19] [19] ;
_Bool arr_13 [19] [19] [19] [19] ;
int arr_14 [19] [19] [19] ;
int arr_15 [19] [19] [19] [19] [19] [19] ;
int arr_16 [19] ;
_Bool arr_17 [19] [19] [19] [19] [19] [19] ;
int arr_18 [19] [19] ;
unsigned char arr_21 [19] [19] [19] ;
short arr_24 [19] [19] ;
short arr_25 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -325727176;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)65211;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 5584996685946357041ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1226261796 : -300697806;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1952459944;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = 1029796441;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? -378295007 : -2079980044;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_24 [i_0] [i_1] = (short)16481;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_25 [i_0] = (short)-14311;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
