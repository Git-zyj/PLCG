#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)98;
signed char var_5 = (signed char)76;
unsigned short var_7 = (unsigned short)21456;
unsigned char var_8 = (unsigned char)179;
short var_10 = (short)12247;
unsigned char var_11 = (unsigned char)120;
short var_12 = (short)16840;
unsigned short var_14 = (unsigned short)31073;
signed char var_15 = (signed char)-80;
signed char var_17 = (signed char)-44;
signed char var_18 = (signed char)-13;
int zero = 0;
unsigned short var_19 = (unsigned short)3751;
unsigned char var_20 = (unsigned char)172;
unsigned char var_21 = (unsigned char)226;
unsigned char var_22 = (unsigned char)215;
signed char var_23 = (signed char)2;
unsigned short var_24 = (unsigned short)9441;
short var_25 = (short)18437;
unsigned char var_26 = (unsigned char)29;
signed char var_27 = (signed char)-124;
unsigned char var_28 = (unsigned char)122;
unsigned short var_29 = (unsigned short)13832;
short var_30 = (short)-32237;
unsigned short var_31 = (unsigned short)2780;
unsigned char var_32 = (unsigned char)58;
short var_33 = (short)-19730;
unsigned short var_34 = (unsigned short)59896;
unsigned char var_35 = (unsigned char)168;
short var_36 = (short)-5389;
unsigned short var_37 = (unsigned short)32890;
unsigned short var_38 = (unsigned short)26547;
signed char arr_5 [22] [22] ;
short arr_13 [22] [22] [22] ;
unsigned short arr_22 [22] ;
signed char arr_25 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)-20019;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (unsigned short)31632 : (unsigned short)57530;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (signed char)64;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
