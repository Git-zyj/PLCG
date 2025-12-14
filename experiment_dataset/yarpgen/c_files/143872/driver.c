#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)105;
int var_4 = -1377278209;
unsigned int var_8 = 3354486628U;
long long int var_13 = 7943037716225118942LL;
int zero = 0;
short var_14 = (short)-11889;
unsigned int var_15 = 2368877413U;
unsigned char var_16 = (unsigned char)46;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-69;
signed char var_19 = (signed char)14;
short var_20 = (short)5344;
signed char var_21 = (signed char)109;
unsigned int var_22 = 1369581730U;
unsigned char var_23 = (unsigned char)5;
unsigned int var_24 = 3355094517U;
unsigned int var_25 = 3778163532U;
unsigned int var_26 = 2467846322U;
long long int var_27 = -5564691692464295295LL;
unsigned char var_28 = (unsigned char)230;
short var_29 = (short)-8300;
signed char var_30 = (signed char)101;
short var_31 = (short)-736;
long long int var_32 = 7618308199105426358LL;
signed char var_33 = (signed char)25;
signed char var_34 = (signed char)-121;
_Bool var_35 = (_Bool)1;
_Bool var_36 = (_Bool)1;
long long int var_37 = 7382777782011075135LL;
int var_38 = -2060463004;
unsigned long long int var_39 = 12237880219419473666ULL;
short var_40 = (short)-24356;
unsigned int arr_1 [25] [25] ;
short arr_9 [25] ;
unsigned short arr_10 [25] [25] ;
long long int arr_12 [25] ;
unsigned long long int arr_13 [25] ;
int arr_14 [25] [25] [25] ;
signed char arr_15 [25] [25] [25] ;
signed char arr_16 [25] [25] [25] ;
signed char arr_18 [25] [25] [25] [25] ;
unsigned short arr_19 [25] [25] [25] [25] [25] [25] ;
long long int arr_20 [25] [25] [25] [25] [25] ;
signed char arr_24 [25] ;
short arr_26 [21] [21] ;
unsigned int arr_27 [21] ;
signed char arr_28 [21] ;
_Bool arr_30 [21] [21] [21] ;
_Bool arr_36 [21] [21] [21] [21] [21] ;
unsigned int arr_22 [25] [25] ;
unsigned int arr_42 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 353912639U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)20119 : (short)14736;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)38655;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = -8525480485915482451LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = 3470947251704396192ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = -463315012;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)126 : (signed char)12;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)42608;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = -2668653806818542708LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_24 [i_0] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_26 [i_0] [i_1] = (short)-9292;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_27 [i_0] = 421689219U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_28 [i_0] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_22 [i_0] [i_1] = 1717001144U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_42 [i_0] [i_1] = (i_0 % 2 == 0) ? 584850985U : 196321542U;
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
    hash(&seed, var_39);
    hash(&seed, var_40);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_42 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
