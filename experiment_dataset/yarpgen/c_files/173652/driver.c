#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7140;
signed char var_1 = (signed char)61;
_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)32103;
short var_5 = (short)-15437;
int var_6 = 272825043;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
int var_9 = 615135467;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-29889;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)51564;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-25381;
_Bool var_17 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = 335864985;
int var_20 = 1580186929;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
short var_23 = (short)4007;
int var_24 = 70429098;
int var_25 = -2146627160;
short var_26 = (short)10320;
_Bool var_27 = (_Bool)0;
signed char var_28 = (signed char)-78;
_Bool var_29 = (_Bool)1;
_Bool var_30 = (_Bool)1;
unsigned short var_31 = (unsigned short)57812;
int var_32 = 1494542937;
signed char var_33 = (signed char)105;
unsigned short var_34 = (unsigned short)20124;
_Bool var_35 = (_Bool)1;
int var_36 = -762892693;
signed char var_37 = (signed char)3;
_Bool var_38 = (_Bool)0;
short var_39 = (short)-9317;
int var_40 = 1096035844;
_Bool var_41 = (_Bool)0;
int var_42 = 1914365712;
int var_43 = -1292913844;
int arr_0 [16] ;
int arr_4 [16] [16] [16] ;
signed char arr_8 [16] [16] [16] [16] [16] ;
unsigned short arr_10 [16] [16] [16] [16] ;
unsigned short arr_11 [16] [16] [16] [16] ;
int arr_12 [16] [16] [16] [16] ;
short arr_13 [16] [16] [16] ;
signed char arr_17 [16] [16] [16] [16] [16] [16] ;
signed char arr_18 [16] [16] ;
signed char arr_26 [23] [23] ;
_Bool arr_27 [23] ;
_Bool arr_29 [23] [23] [23] ;
signed char arr_30 [23] [23] [23] ;
unsigned short arr_31 [23] ;
int arr_32 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -269733806;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1780525026;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned short)16522;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned short)41151;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 953992209 : 2023706398;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)30884;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (signed char)(-127 - 1) : (signed char)-10;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)29 : (signed char)60;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_26 [i_0] [i_1] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_27 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_31 [i_0] = (unsigned short)52439;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = -1798403889;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
