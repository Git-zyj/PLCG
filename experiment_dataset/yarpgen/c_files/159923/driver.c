#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-118;
short var_4 = (short)-32424;
unsigned short var_5 = (unsigned short)56744;
short var_7 = (short)-18217;
int var_8 = 519376287;
unsigned char var_11 = (unsigned char)18;
_Bool var_12 = (_Bool)1;
int var_14 = -854779626;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -503082196;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)199;
unsigned short var_23 = (unsigned short)54558;
unsigned int var_24 = 458933609U;
int var_25 = 1510145446;
int var_26 = 1901612577;
unsigned int var_27 = 2474112373U;
int var_28 = 252055053;
int var_29 = 1226755293;
unsigned char var_30 = (unsigned char)186;
int var_31 = 1306823861;
unsigned short var_32 = (unsigned short)60678;
unsigned short var_33 = (unsigned short)28617;
_Bool var_34 = (_Bool)0;
_Bool var_35 = (_Bool)1;
unsigned int var_36 = 228244103U;
_Bool var_37 = (_Bool)1;
int var_38 = 887320294;
short arr_2 [22] ;
unsigned short arr_5 [22] ;
short arr_7 [22] [22] ;
unsigned char arr_10 [22] [22] [22] ;
unsigned short arr_11 [22] [22] [22] [22] ;
_Bool arr_13 [22] [22] [22] [22] [22] ;
unsigned int arr_18 [23] ;
signed char arr_20 [23] ;
signed char arr_21 [23] [23] [23] ;
_Bool arr_22 [23] ;
short arr_28 [23] [23] [23] [23] ;
_Bool arr_31 [22] [22] ;
unsigned short arr_37 [14] ;
_Bool arr_40 [24] ;
unsigned char arr_41 [24] ;
_Bool arr_42 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)-10383;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned short)62799;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (short)31736;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned short)59509;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = 3191410638U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_20 [i_0] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-100 : (signed char)-4;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_22 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (short)21435;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_31 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_37 [i_0] = (unsigned short)8316;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_40 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_41 [i_0] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_42 [i_0] [i_1] = (_Bool)1;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
