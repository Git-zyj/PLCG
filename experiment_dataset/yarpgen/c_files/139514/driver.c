#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 140777479;
signed char var_1 = (signed char)-119;
unsigned long long int var_2 = 3763288764200955610ULL;
unsigned short var_3 = (unsigned short)24297;
unsigned short var_4 = (unsigned short)54783;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)223;
_Bool var_7 = (_Bool)1;
int var_8 = 344259141;
unsigned long long int var_9 = 8910667481558101950ULL;
signed char var_10 = (signed char)107;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = 2113502022;
unsigned char var_15 = (unsigned char)41;
unsigned int var_16 = 3834007635U;
int var_17 = -1314805818;
unsigned char var_18 = (unsigned char)119;
signed char var_19 = (signed char)-42;
signed char var_20 = (signed char)-82;
long long int var_21 = -243962559001587892LL;
signed char var_22 = (signed char)-16;
unsigned long long int var_23 = 3214547241290400658ULL;
short var_24 = (short)20415;
unsigned char var_25 = (unsigned char)50;
unsigned short var_26 = (unsigned short)27941;
int var_27 = 1177341042;
unsigned long long int var_28 = 11439930511195087847ULL;
short var_29 = (short)23562;
short var_30 = (short)29286;
signed char var_31 = (signed char)-31;
unsigned short var_32 = (unsigned short)57909;
_Bool var_33 = (_Bool)1;
long long int var_34 = 3837466616409778123LL;
unsigned short var_35 = (unsigned short)7174;
long long int var_36 = -7342678078402034674LL;
unsigned long long int arr_0 [25] ;
_Bool arr_1 [25] ;
unsigned char arr_2 [25] [25] [25] ;
unsigned long long int arr_3 [25] [25] ;
unsigned int arr_4 [25] [25] [25] [25] ;
short arr_5 [25] [25] [25] ;
unsigned long long int arr_7 [25] ;
_Bool arr_9 [25] [25] [25] [25] [25] ;
signed char arr_11 [25] [25] [25] [25] [25] ;
unsigned long long int arr_12 [25] [25] [25] ;
unsigned int arr_18 [25] ;
unsigned short arr_21 [25] [25] ;
signed char arr_37 [14] [14] [14] [14] ;
_Bool arr_13 [25] [25] ;
signed char arr_19 [25] ;
unsigned char arr_22 [25] ;
signed char arr_25 [16] ;
unsigned short arr_28 [12] ;
signed char arr_39 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 16340004069599547504ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 15443111791954680277ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 459430318U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)8279;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 15077516753290516607ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 10855806556234291962ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = 391320266U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned short)42876;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)95 : (signed char)86;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_22 [i_0] = (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_25 [i_0] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? (unsigned short)25914 : (unsigned short)25432;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)109 : (signed char)59;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_39 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
