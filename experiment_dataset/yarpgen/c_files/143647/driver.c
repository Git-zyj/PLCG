#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44704;
unsigned short var_3 = (unsigned short)46429;
unsigned short var_4 = (unsigned short)2362;
unsigned short var_5 = (unsigned short)35967;
unsigned int var_6 = 2781130655U;
unsigned int var_7 = 31398919U;
int var_10 = 1056789932;
int zero = 0;
unsigned short var_11 = (unsigned short)21374;
unsigned short var_12 = (unsigned short)14418;
int var_13 = 1081401189;
unsigned long long int var_14 = 5513622974896783406ULL;
unsigned short var_15 = (unsigned short)7962;
unsigned short var_16 = (unsigned short)18299;
unsigned short var_17 = (unsigned short)27740;
unsigned long long int var_18 = 1183704034940733274ULL;
unsigned long long int var_19 = 8789633527674709468ULL;
int var_20 = 385238496;
unsigned long long int var_21 = 8887124192746683105ULL;
int var_22 = 603724010;
int var_23 = 1112667746;
unsigned long long int var_24 = 7283262791372567972ULL;
unsigned short var_25 = (unsigned short)8282;
unsigned short var_26 = (unsigned short)7241;
unsigned int var_27 = 3984109647U;
unsigned long long int var_28 = 11061204790451366126ULL;
int var_29 = -107572269;
unsigned short var_30 = (unsigned short)48407;
unsigned long long int var_31 = 177395108060555973ULL;
int var_32 = -628095011;
int var_33 = 1061020240;
unsigned short var_34 = (unsigned short)19535;
int var_35 = 1994045150;
unsigned int var_36 = 2791971778U;
int var_37 = -223915194;
unsigned short var_38 = (unsigned short)56815;
int var_39 = -290438887;
int var_40 = 1237961669;
unsigned int var_41 = 1395523092U;
unsigned short var_42 = (unsigned short)26852;
int var_43 = 1425104086;
unsigned long long int arr_0 [23] ;
unsigned int arr_1 [23] ;
unsigned long long int arr_4 [23] ;
unsigned int arr_7 [23] ;
unsigned short arr_10 [23] [23] ;
unsigned int arr_11 [23] [23] ;
int arr_15 [23] [23] [23] [23] ;
unsigned short arr_17 [23] [23] [23] [23] [23] [23] ;
int arr_22 [23] [23] [23] [23] [23] [23] ;
unsigned long long int arr_23 [23] [23] [23] [23] [23] [23] ;
unsigned int arr_26 [23] [23] [23] [23] [23] [23] [23] ;
unsigned long long int arr_29 [23] [23] [23] [23] [23] ;
int arr_35 [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 777545106071571778ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 3131488268U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 9419402467788379024ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 632042339U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)48086 : (unsigned short)52459;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = 3605003874U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = -1431996792;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)24978;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 40665862;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 654531916442652268ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 2708711580U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 17606840420525009957ULL : 15428930253338388653ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = -605353768;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
