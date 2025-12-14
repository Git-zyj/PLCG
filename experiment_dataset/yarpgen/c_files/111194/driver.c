#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1814248635U;
int var_1 = 1370685558;
unsigned short var_3 = (unsigned short)23994;
long long int var_4 = 5411127455619174547LL;
signed char var_6 = (signed char)-60;
short var_7 = (short)20107;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)30;
unsigned short var_11 = (unsigned short)6040;
signed char var_13 = (signed char)3;
signed char var_19 = (signed char)-97;
int zero = 0;
short var_20 = (short)21436;
unsigned int var_21 = 3787240280U;
unsigned char var_22 = (unsigned char)198;
unsigned int var_23 = 1374146876U;
unsigned char var_24 = (unsigned char)74;
long long int var_25 = 1040900809845569565LL;
short var_26 = (short)6296;
unsigned char var_27 = (unsigned char)135;
short var_28 = (short)-1637;
unsigned int var_29 = 1037077629U;
unsigned char var_30 = (unsigned char)49;
unsigned int var_31 = 989319826U;
unsigned int var_32 = 2896509614U;
_Bool var_33 = (_Bool)0;
unsigned short var_34 = (unsigned short)61296;
int var_35 = 349970693;
int var_36 = -163013148;
unsigned int var_37 = 1587835668U;
unsigned long long int var_38 = 6047223216037874702ULL;
unsigned short var_39 = (unsigned short)5590;
signed char var_40 = (signed char)-5;
unsigned char var_41 = (unsigned char)111;
unsigned long long int var_42 = 1641969958853976113ULL;
unsigned int var_43 = 2261658364U;
int var_44 = -822283949;
unsigned short var_45 = (unsigned short)61255;
unsigned int var_46 = 1818793332U;
signed char var_47 = (signed char)105;
_Bool var_48 = (_Bool)1;
signed char var_49 = (signed char)88;
unsigned int var_50 = 3349661523U;
short var_51 = (short)-24989;
long long int var_52 = -5732549036226988708LL;
int arr_0 [16] [16] ;
long long int arr_1 [16] ;
short arr_2 [16] ;
unsigned char arr_3 [16] ;
long long int arr_4 [16] [16] ;
int arr_5 [16] ;
unsigned int arr_6 [16] [16] ;
unsigned short arr_7 [16] ;
int arr_8 [16] ;
unsigned short arr_9 [16] [16] ;
signed char arr_10 [16] [16] [16] ;
unsigned char arr_11 [16] [16] [16] ;
unsigned long long int arr_13 [16] ;
signed char arr_14 [16] ;
_Bool arr_15 [16] [16] ;
unsigned char arr_16 [16] [16] [16] ;
unsigned int arr_17 [16] ;
signed char arr_18 [16] [16] [16] [16] ;
unsigned short arr_19 [16] ;
short arr_20 [16] [16] ;
long long int arr_21 [16] [16] [16] [16] ;
unsigned int arr_22 [16] [16] [16] [16] [16] ;
int arr_26 [16] ;
unsigned int arr_28 [16] [16] [16] [16] [16] [16] ;
unsigned int arr_31 [16] [16] [16] [16] [16] [16] [16] ;
unsigned char arr_32 [16] [16] [16] [16] [16] ;
signed char arr_33 [16] [16] [16] [16] [16] [16] ;
unsigned int arr_35 [16] [16] [16] [16] ;
unsigned int arr_36 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 332505192;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 8362516251647700831LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)-1606;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = -5948694925964914603LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = -2006896233;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = 3246957579U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (unsigned short)55954;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 593622959;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)40013;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)-76;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = 5138310072938995410ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (signed char)96;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = 1343237526U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)-92 : (signed char)110;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (unsigned short)14780 : (unsigned short)32417;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-29114 : (short)4107;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = -6100867175878009937LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 2887797241U : 3241730237U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? 451631127 : -708305142;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 565040422U : 3002564985U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 1481627973U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned char)162 : (unsigned char)107;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (signed char)22 : (signed char)-93;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 586895083U : 3329217517U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_36 [i_0] = 2047073161U;
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
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
