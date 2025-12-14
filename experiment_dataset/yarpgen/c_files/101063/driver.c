#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16034;
short var_1 = (short)23315;
int var_2 = 473448051;
signed char var_3 = (signed char)83;
unsigned long long int var_4 = 13478215836577846135ULL;
unsigned long long int var_5 = 16877076494895564465ULL;
short var_6 = (short)-6212;
unsigned char var_7 = (unsigned char)129;
short var_8 = (short)-6161;
unsigned int var_9 = 1746050145U;
unsigned int var_10 = 1591554750U;
int var_11 = -1548642987;
unsigned char var_12 = (unsigned char)241;
int var_13 = 1828427878;
int zero = 0;
signed char var_14 = (signed char)91;
unsigned char var_15 = (unsigned char)209;
int var_16 = 130875980;
int var_17 = -553162854;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-18575;
unsigned char var_21 = (unsigned char)153;
signed char var_22 = (signed char)81;
short var_23 = (short)-6812;
_Bool var_24 = (_Bool)0;
unsigned char var_25 = (unsigned char)38;
unsigned int var_26 = 691869240U;
signed char var_27 = (signed char)-121;
long long int var_28 = 3059182072914999958LL;
unsigned char var_29 = (unsigned char)22;
_Bool var_30 = (_Bool)1;
unsigned int var_31 = 1588954591U;
unsigned char var_32 = (unsigned char)146;
signed char var_33 = (signed char)21;
unsigned char var_34 = (unsigned char)77;
long long int var_35 = 2625983437238848649LL;
_Bool var_36 = (_Bool)0;
short var_37 = (short)30038;
int var_38 = -469632202;
int var_39 = -1411164779;
long long int var_40 = -3310888568130266127LL;
unsigned int var_41 = 2688879431U;
signed char var_42 = (signed char)(-127 - 1);
unsigned int var_43 = 2833639157U;
unsigned short var_44 = (unsigned short)39759;
unsigned int var_45 = 3622670902U;
int var_46 = 1388895040;
unsigned int var_47 = 224312169U;
short var_48 = (short)31536;
unsigned long long int var_49 = 15717513940893234876ULL;
long long int var_50 = 858751387462796837LL;
short var_51 = (short)5496;
unsigned int var_52 = 1818398009U;
unsigned char var_53 = (unsigned char)16;
unsigned char var_54 = (unsigned char)160;
unsigned char var_55 = (unsigned char)161;
int var_56 = -2129484802;
signed char var_57 = (signed char)70;
int var_58 = 1908261410;
unsigned int var_59 = 2412747508U;
unsigned char var_60 = (unsigned char)97;
_Bool var_61 = (_Bool)1;
int var_62 = -189959972;
long long int var_63 = 3023352003543743556LL;
unsigned int var_64 = 923007300U;
unsigned char var_65 = (unsigned char)171;
unsigned int var_66 = 2399253722U;
int var_67 = -911426642;
unsigned int arr_0 [23] ;
signed char arr_1 [23] ;
unsigned long long int arr_3 [23] [23] ;
unsigned char arr_5 [23] ;
int arr_6 [23] [23] [23] ;
int arr_7 [23] ;
signed char arr_9 [23] ;
short arr_10 [21] ;
unsigned char arr_11 [21] ;
unsigned int arr_12 [21] ;
unsigned long long int arr_13 [21] [21] ;
int arr_15 [21] [21] [21] ;
unsigned char arr_16 [21] [21] [21] ;
short arr_17 [21] [21] [21] [21] [21] ;
signed char arr_18 [21] [21] [21] [21] [21] [21] ;
unsigned int arr_21 [21] [21] [21] ;
signed char arr_23 [21] [21] [21] ;
int arr_24 [21] [21] [21] [21] [21] ;
unsigned char arr_25 [21] [21] [21] [21] ;
unsigned char arr_27 [21] [21] ;
unsigned long long int arr_30 [21] [21] [21] ;
unsigned int arr_32 [21] ;
signed char arr_34 [21] [21] [21] [21] [21] [21] [21] ;
long long int arr_35 [21] [21] [21] [21] ;
signed char arr_36 [21] [21] [21] [21] [21] ;
short arr_37 [21] [21] [21] ;
signed char arr_38 [21] [21] [21] [21] [21] ;
unsigned char arr_39 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 891316579U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 5408945863114672378ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1803402025;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 313140402;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (signed char)-91;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (short)-21127;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = 874864465U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = 1880591000748327500ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -1709507835;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)29145;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (signed char)17 : (signed char)-31;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 3183772893U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)52 : (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = -1951123714;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_27 [i_0] [i_1] = (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = 17590492616457629945ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_32 [i_0] = 3218757462U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)86;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = -6960785477594189489LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)18;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (short)14130;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (unsigned char)4;
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
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
