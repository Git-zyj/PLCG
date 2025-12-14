#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)155;
unsigned long long int var_2 = 15812673110788485000ULL;
signed char var_3 = (signed char)119;
long long int var_5 = -3837010625935053923LL;
long long int var_7 = 3348565525973892590LL;
unsigned long long int var_8 = 17850746384663519937ULL;
long long int var_9 = -5359115944857427818LL;
short var_11 = (short)20456;
unsigned short var_12 = (unsigned short)1392;
_Bool var_13 = (_Bool)0;
long long int var_14 = 6611338867036619305LL;
unsigned long long int var_15 = 5009565221137618162ULL;
unsigned long long int var_16 = 9730261173626346745ULL;
long long int var_17 = -8144037268079101789LL;
int zero = 0;
int var_18 = 1227469530;
short var_19 = (short)-10127;
unsigned char var_20 = (unsigned char)232;
unsigned long long int var_21 = 3965125758063995116ULL;
_Bool var_22 = (_Bool)0;
int var_23 = -123294852;
unsigned long long int var_24 = 1871552189354547436ULL;
long long int var_25 = -8707826027158152034LL;
_Bool var_26 = (_Bool)1;
int var_27 = 1842314684;
signed char var_28 = (signed char)55;
short var_29 = (short)-10624;
_Bool var_30 = (_Bool)1;
long long int var_31 = 5008551005368874958LL;
unsigned int var_32 = 743183942U;
unsigned long long int var_33 = 3666238280703786359ULL;
int var_34 = 262561374;
signed char var_35 = (signed char)-36;
unsigned char var_36 = (unsigned char)232;
unsigned short var_37 = (unsigned short)63138;
signed char var_38 = (signed char)-124;
int var_39 = -1196175800;
_Bool var_40 = (_Bool)1;
signed char var_41 = (signed char)24;
signed char var_42 = (signed char)111;
int var_43 = -158833936;
signed char var_44 = (signed char)-36;
int var_45 = 1068474630;
short var_46 = (short)-28993;
int var_47 = 553590852;
unsigned short var_48 = (unsigned short)45772;
short var_49 = (short)7274;
_Bool arr_0 [16] [16] ;
_Bool arr_1 [16] ;
signed char arr_3 [13] [13] ;
unsigned long long int arr_8 [15] ;
short arr_12 [15] [15] [15] ;
_Bool arr_14 [15] [15] [15] [15] [15] ;
unsigned char arr_17 [15] [15] [15] [15] [15] ;
int arr_19 [15] [15] [15] [15] [15] ;
_Bool arr_21 [15] [15] [15] [15] [15] [15] ;
unsigned char arr_24 [15] [15] [15] [15] ;
signed char arr_26 [15] [15] [15] [15] [15] ;
unsigned short arr_28 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-66;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = 970627616500307615ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-22098 : (short)-15411;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = -1141880605;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)37 : (unsigned char)41;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (signed char)-30 : (signed char)72;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_28 [i_0] = (unsigned short)15904;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
