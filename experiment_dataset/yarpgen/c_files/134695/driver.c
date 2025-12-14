#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7986756608160848714ULL;
signed char var_2 = (signed char)-100;
unsigned long long int var_6 = 1707564057985273229ULL;
short var_7 = (short)32245;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)22;
int var_19 = 1767182539;
unsigned char var_20 = (unsigned char)79;
short var_21 = (short)20817;
int var_22 = -108030778;
unsigned long long int var_23 = 16951072102348354863ULL;
int var_24 = 2069290571;
_Bool var_25 = (_Bool)1;
unsigned int var_26 = 1533524624U;
unsigned char var_27 = (unsigned char)99;
unsigned long long int var_28 = 3473064255481857883ULL;
short var_29 = (short)-29270;
long long int var_30 = 9154620958385385596LL;
_Bool var_31 = (_Bool)0;
long long int var_32 = -4652288941205652999LL;
unsigned int var_33 = 2681716254U;
_Bool var_34 = (_Bool)0;
long long int var_35 = -6523058831924989175LL;
unsigned short var_36 = (unsigned short)8197;
long long int var_37 = -6442660769248599007LL;
unsigned long long int var_38 = 6867750053282031225ULL;
_Bool var_39 = (_Bool)1;
unsigned long long int var_40 = 4571945819909559335ULL;
long long int var_41 = 8962641686609682550LL;
unsigned int var_42 = 2188976469U;
int var_43 = -1002984055;
unsigned long long int var_44 = 11706115885834830802ULL;
short var_45 = (short)1093;
unsigned int var_46 = 3984487455U;
unsigned char var_47 = (unsigned char)198;
_Bool var_48 = (_Bool)0;
unsigned short var_49 = (unsigned short)40098;
unsigned char var_50 = (unsigned char)128;
unsigned long long int var_51 = 8160080738712947120ULL;
short var_52 = (short)-20;
_Bool var_53 = (_Bool)0;
unsigned long long int var_54 = 13935019512274530691ULL;
unsigned short var_55 = (unsigned short)45439;
unsigned short var_56 = (unsigned short)41019;
int var_57 = -1832278295;
int var_58 = 541127774;
unsigned long long int var_59 = 7538722713960797569ULL;
_Bool var_60 = (_Bool)1;
long long int arr_0 [15] ;
unsigned long long int arr_2 [15] ;
_Bool arr_3 [15] [15] ;
_Bool arr_4 [15] ;
signed char arr_9 [15] [15] [15] [15] ;
_Bool arr_11 [15] ;
int arr_12 [15] [15] [15] [15] [15] [15] ;
unsigned char arr_13 [15] [15] [15] ;
unsigned long long int arr_15 [15] ;
unsigned long long int arr_17 [15] [15] [15] [15] [15] [15] ;
_Bool arr_18 [15] [15] [15] [15] [15] ;
unsigned int arr_21 [15] [15] [15] [15] [15] ;
unsigned long long int arr_22 [15] [15] [15] ;
unsigned short arr_23 [15] ;
_Bool arr_24 [15] [15] [15] ;
long long int arr_25 [15] [15] ;
short arr_26 [15] ;
unsigned int arr_31 [15] [15] [15] [15] ;
unsigned short arr_32 [15] [15] [15] [15] ;
unsigned short arr_40 [15] [15] ;
long long int arr_45 [15] [15] [15] [15] ;
unsigned char arr_56 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -4084198678343323018LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 17966898635382900349ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -2141562911;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = 10085369643381451220ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 7099971386776578949ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 3435587322U : 3149117383U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 3842549565107934900ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_23 [i_0] = (unsigned short)3334;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_25 [i_0] [i_1] = -6350385458474134096LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_26 [i_0] = (short)-29943;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = 3990962506U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (unsigned short)45781;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_40 [i_0] [i_1] = (unsigned short)61337;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = 2595057981492598942LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_56 [i_0] = (unsigned char)12;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
