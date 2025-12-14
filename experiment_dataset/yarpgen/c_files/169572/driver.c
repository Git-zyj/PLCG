#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2729;
short var_1 = (short)7437;
unsigned int var_2 = 3770030543U;
_Bool var_6 = (_Bool)1;
int var_7 = 800587321;
unsigned int var_9 = 3146918081U;
short var_10 = (short)2188;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)227;
unsigned int var_14 = 207236026U;
short var_15 = (short)-19858;
unsigned short var_16 = (unsigned short)47075;
short var_17 = (short)4932;
int var_18 = 1223361824;
int zero = 0;
long long int var_19 = -1424052338505678153LL;
unsigned char var_20 = (unsigned char)139;
signed char var_21 = (signed char)71;
unsigned short var_22 = (unsigned short)42928;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)-18;
_Bool var_25 = (_Bool)1;
_Bool var_26 = (_Bool)0;
unsigned int var_27 = 2649979530U;
_Bool var_28 = (_Bool)0;
unsigned int var_29 = 1993733754U;
unsigned char var_30 = (unsigned char)177;
_Bool var_31 = (_Bool)0;
unsigned long long int var_32 = 15438368502131846404ULL;
unsigned int var_33 = 2844247272U;
unsigned long long int var_34 = 9418988631369991984ULL;
unsigned int var_35 = 2694076755U;
unsigned char var_36 = (unsigned char)14;
signed char var_37 = (signed char)6;
unsigned char var_38 = (unsigned char)229;
unsigned short var_39 = (unsigned short)54745;
unsigned int var_40 = 2245206534U;
unsigned char var_41 = (unsigned char)167;
unsigned short var_42 = (unsigned short)63306;
long long int arr_0 [14] [14] ;
unsigned char arr_1 [14] ;
int arr_4 [14] ;
unsigned char arr_5 [14] ;
short arr_7 [14] [14] [14] ;
_Bool arr_9 [14] [14] ;
unsigned int arr_10 [14] ;
short arr_12 [14] [14] [14] [14] ;
short arr_14 [14] ;
short arr_15 [14] [14] [14] [14] [14] [14] ;
short arr_20 [14] [14] ;
_Bool arr_26 [22] ;
unsigned int arr_27 [22] ;
unsigned int arr_2 [14] ;
_Bool arr_3 [14] [14] ;
short arr_22 [14] ;
unsigned char arr_25 [14] [14] ;
unsigned long long int arr_28 [22] ;
unsigned char arr_29 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = -7334158688743319982LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned char)229;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = -1519221693;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)-12456;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = 3809479344U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (short)-4203;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (short)-24168;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-18661;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_20 [i_0] [i_1] = (short)-29609;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_26 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_27 [i_0] = 4292583489U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 702701815U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_22 [i_0] = (short)-13330;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_25 [i_0] [i_1] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_28 [i_0] = 6760531261441208937ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_29 [i_0] [i_1] = (unsigned char)208;
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
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
