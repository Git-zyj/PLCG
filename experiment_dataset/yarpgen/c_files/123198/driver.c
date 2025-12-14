#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13451438804837904323ULL;
unsigned short var_1 = (unsigned short)37602;
long long int var_2 = -6061287378193402241LL;
unsigned int var_3 = 757247287U;
unsigned long long int var_4 = 5505947093963827384ULL;
unsigned short var_5 = (unsigned short)48349;
short var_6 = (short)18675;
long long int var_7 = 4590743850858374690LL;
short var_8 = (short)-27003;
unsigned char var_9 = (unsigned char)233;
long long int var_10 = -8441239524866426379LL;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_13 = (short)-1712;
unsigned char var_14 = (unsigned char)159;
int var_15 = -1060800555;
unsigned int var_16 = 3359155952U;
unsigned int var_17 = 3933707039U;
unsigned short var_18 = (unsigned short)28432;
signed char var_19 = (signed char)-97;
long long int var_20 = -9061678635571458618LL;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 8950329395248303748ULL;
unsigned char var_23 = (unsigned char)2;
signed char var_24 = (signed char)-12;
unsigned long long int var_25 = 6887005564069100222ULL;
unsigned char var_26 = (unsigned char)52;
unsigned int var_27 = 1287762117U;
_Bool var_28 = (_Bool)1;
unsigned long long int var_29 = 2517511252935807522ULL;
long long int var_30 = 7547071016578033249LL;
_Bool var_31 = (_Bool)1;
unsigned char var_32 = (unsigned char)54;
_Bool var_33 = (_Bool)0;
_Bool var_34 = (_Bool)0;
_Bool var_35 = (_Bool)1;
long long int var_36 = 7990178705559218651LL;
unsigned short var_37 = (unsigned short)5897;
unsigned short var_38 = (unsigned short)53099;
unsigned int var_39 = 197025786U;
short var_40 = (short)-16774;
unsigned char var_41 = (unsigned char)60;
_Bool var_42 = (_Bool)0;
long long int var_43 = -8309980775983872269LL;
_Bool var_44 = (_Bool)1;
unsigned long long int var_45 = 6690259280611743249ULL;
unsigned long long int arr_0 [19] ;
signed char arr_1 [19] ;
long long int arr_2 [19] [19] ;
int arr_3 [19] [19] ;
long long int arr_4 [19] [19] ;
int arr_5 [19] [19] [19] ;
int arr_7 [19] ;
signed char arr_9 [19] [19] [19] [19] [19] [19] ;
short arr_10 [19] [19] [19] [19] [19] ;
signed char arr_11 [19] [19] [19] ;
int arr_14 [19] [19] [19] [19] [19] [19] ;
int arr_16 [19] [19] [19] [19] [19] ;
_Bool arr_17 [19] [19] [19] ;
unsigned long long int arr_21 [19] [19] [19] [19] ;
unsigned short arr_24 [19] [19] ;
_Bool arr_25 [19] [19] [19] [19] ;
short arr_31 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 16217472138335018633ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)114;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 8694201662690580284LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = -347416541;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 7519499911333428392LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1778219560;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 1412012247;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-2720;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)113;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 937289009 : 1994852073;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = -1338336283;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 17733437381655846005ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_24 [i_0] [i_1] = (unsigned short)27875;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (short)32022;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
