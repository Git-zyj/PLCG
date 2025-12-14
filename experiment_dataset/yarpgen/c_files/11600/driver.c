#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3226882372U;
unsigned char var_3 = (unsigned char)195;
long long int var_6 = -8344955522091152760LL;
long long int var_10 = -7509808916702614975LL;
int var_12 = -1273191995;
unsigned short var_13 = (unsigned short)42008;
unsigned char var_14 = (unsigned char)139;
unsigned char var_15 = (unsigned char)28;
unsigned short var_16 = (unsigned short)57092;
int zero = 0;
int var_18 = 821063422;
unsigned char var_19 = (unsigned char)252;
unsigned int var_20 = 546115542U;
signed char var_21 = (signed char)-105;
unsigned long long int var_22 = 8540595847091508509ULL;
_Bool var_23 = (_Bool)0;
int var_24 = 1361105712;
unsigned int var_25 = 3373612114U;
short var_26 = (short)6214;
unsigned char var_27 = (unsigned char)120;
unsigned long long int var_28 = 13668693561831599596ULL;
_Bool var_29 = (_Bool)1;
signed char var_30 = (signed char)-25;
unsigned short var_31 = (unsigned short)51199;
long long int var_32 = -7699747361075384848LL;
unsigned char var_33 = (unsigned char)177;
unsigned long long int var_34 = 806534328418752512ULL;
unsigned int var_35 = 2992924812U;
unsigned char var_36 = (unsigned char)193;
unsigned short var_37 = (unsigned short)40501;
unsigned long long int var_38 = 18435443700845331958ULL;
unsigned long long int var_39 = 5383669285181866971ULL;
int var_40 = 215971239;
unsigned char var_41 = (unsigned char)254;
_Bool var_42 = (_Bool)1;
int var_43 = -1472992318;
int arr_0 [18] [18] ;
int arr_1 [18] ;
unsigned short arr_2 [18] ;
unsigned short arr_4 [18] [18] ;
int arr_5 [18] [18] [18] ;
short arr_7 [18] [18] ;
signed char arr_9 [18] [18] [18] ;
unsigned int arr_10 [18] ;
int arr_17 [18] ;
unsigned int arr_18 [18] [18] [18] ;
signed char arr_27 [18] [18] [18] [18] ;
unsigned int arr_33 [24] ;
unsigned long long int arr_34 [24] ;
short arr_36 [15] ;
unsigned char arr_6 [18] [18] ;
int arr_15 [18] [18] ;
unsigned char arr_32 [18] [18] [18] [18] [18] [18] [18] ;
unsigned long long int arr_35 [24] ;
unsigned short arr_39 [15] [15] ;
int arr_49 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = -1908313075;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -1438539404;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)40396;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)59285;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -76029923;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-10739;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)90;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = 33272643U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = -785071185;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 1680736065U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)21 : (signed char)-122;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_33 [i_0] = 1958682367U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_34 [i_0] = 18249328261640651921ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_36 [i_0] = (short)11065;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_15 [i_0] [i_1] = 1491921571;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? (unsigned char)47 : (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_35 [i_0] = 11675885208396683214ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_39 [i_0] [i_1] = (unsigned short)38039;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_49 [i_0] = -1581315928;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_39 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_49 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
