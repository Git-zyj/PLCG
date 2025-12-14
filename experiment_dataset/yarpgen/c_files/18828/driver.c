#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1026795931;
int var_1 = 438771888;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)0;
int var_12 = -1948612703;
int var_13 = 192136964;
int zero = 0;
int var_14 = 1991679237;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int var_17 = -1257613620;
int var_18 = -997101202;
_Bool var_19 = (_Bool)1;
int var_20 = -555793150;
int var_21 = -1130928287;
int var_22 = -1771708985;
int var_23 = -174719405;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)0;
_Bool var_26 = (_Bool)0;
_Bool var_27 = (_Bool)0;
_Bool arr_0 [11] ;
_Bool arr_1 [11] [11] ;
_Bool arr_3 [23] ;
_Bool arr_6 [23] ;
int arr_8 [23] ;
_Bool arr_11 [23] [23] ;
_Bool arr_20 [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = 1878850346;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
