#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9772512914507081028ULL;
unsigned char var_4 = (unsigned char)164;
unsigned char var_8 = (unsigned char)73;
unsigned char var_10 = (unsigned char)114;
unsigned char var_11 = (unsigned char)71;
unsigned long long int var_12 = 8646764168244558116ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)29;
unsigned char var_14 = (unsigned char)111;
unsigned short var_15 = (unsigned short)918;
unsigned short var_16 = (unsigned short)54428;
unsigned char var_17 = (unsigned char)99;
unsigned short var_18 = (unsigned short)63365;
unsigned short var_19 = (unsigned short)51409;
unsigned long long int var_20 = 1508753722367193132ULL;
unsigned short var_21 = (unsigned short)5728;
unsigned short var_22 = (unsigned short)49294;
unsigned short var_23 = (unsigned short)48767;
unsigned long long int var_24 = 18243680664637180544ULL;
unsigned char var_25 = (unsigned char)132;
unsigned char arr_0 [19] [19] ;
unsigned char arr_1 [19] ;
unsigned char arr_3 [22] ;
unsigned char arr_13 [22] [22] ;
unsigned char arr_14 [22] [22] [22] [22] [22] [22] ;
unsigned short arr_6 [22] ;
unsigned short arr_18 [22] ;
unsigned char arr_19 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (unsigned char)249 : (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)16804 : (unsigned short)52550;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (unsigned short)6276 : (unsigned short)18461;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)32 : (unsigned char)24;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
