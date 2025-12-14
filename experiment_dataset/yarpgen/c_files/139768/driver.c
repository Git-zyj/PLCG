#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)66;
signed char var_2 = (signed char)-4;
signed char var_3 = (signed char)-53;
unsigned char var_4 = (unsigned char)233;
unsigned short var_6 = (unsigned short)1307;
int var_7 = 512027214;
unsigned short var_9 = (unsigned short)25916;
signed char var_11 = (signed char)-100;
unsigned char var_12 = (unsigned char)173;
unsigned short var_14 = (unsigned short)3227;
unsigned long long int var_15 = 3596920023767482483ULL;
unsigned long long int var_17 = 1067636625733070994ULL;
unsigned char var_18 = (unsigned char)61;
int zero = 0;
unsigned char var_20 = (unsigned char)89;
int var_21 = 1874256158;
signed char var_22 = (signed char)-83;
unsigned long long int var_23 = 6378021280601037793ULL;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)1;
unsigned char var_26 = (unsigned char)246;
unsigned long long int var_27 = 13121021457707328791ULL;
long long int var_28 = -3317462382695454365LL;
_Bool var_29 = (_Bool)0;
short var_30 = (short)-28245;
_Bool var_31 = (_Bool)0;
_Bool var_32 = (_Bool)0;
_Bool var_33 = (_Bool)1;
unsigned short var_34 = (unsigned short)45056;
unsigned short var_35 = (unsigned short)24777;
unsigned char var_36 = (unsigned char)10;
int var_37 = 2104622845;
unsigned long long int var_38 = 1538908113223991979ULL;
short var_39 = (short)-23782;
int var_40 = 820656430;
signed char var_41 = (signed char)36;
signed char var_42 = (signed char)94;
signed char var_43 = (signed char)13;
signed char var_44 = (signed char)111;
long long int var_45 = 9014767018395781743LL;
signed char var_46 = (signed char)21;
unsigned short arr_2 [25] ;
unsigned short arr_3 [25] ;
unsigned short arr_5 [25] [25] ;
unsigned short arr_7 [25] [25] [25] ;
unsigned char arr_8 [25] [25] ;
signed char arr_10 [25] [25] ;
unsigned short arr_12 [25] [25] [25] ;
unsigned long long int arr_13 [25] [25] ;
unsigned char arr_18 [25] [25] [25] [25] ;
unsigned char arr_21 [25] [25] [25] [25] [25] ;
unsigned long long int arr_22 [25] [25] [25] [25] [25] ;
unsigned char arr_31 [11] [11] [11] ;
long long int arr_33 [13] ;
int arr_4 [25] ;
signed char arr_11 [25] [25] ;
unsigned long long int arr_23 [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)31350;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned short)27359;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)18164;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)53273;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)128;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-20;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)8830 : (unsigned short)17714;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? 8498878896799302680ULL : 14739644890513319578ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = 7214727714144685405ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_33 [i_0] = (i_0 % 2 == 0) ? -264473387703418898LL : -4911041972341230158LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 2015556532;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-125 : (signed char)89;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 1552519218193892526ULL : 4086656533960759669ULL;
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
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
