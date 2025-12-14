#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_3 = 911286868U;
int var_5 = 298311896;
signed char var_6 = (signed char)126;
int var_9 = -222200752;
unsigned long long int var_12 = 6661782611667523877ULL;
signed char var_13 = (signed char)-61;
int zero = 0;
int var_14 = 1437516616;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 15735442701803586732ULL;
unsigned int var_17 = 2563183443U;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-42;
unsigned char var_21 = (unsigned char)17;
signed char var_22 = (signed char)-34;
long long int var_23 = 7568271467188117642LL;
signed char var_24 = (signed char)-39;
unsigned int var_25 = 3138972363U;
int var_26 = 756629418;
int var_27 = -1266073664;
unsigned int var_28 = 740500481U;
unsigned short var_29 = (unsigned short)59414;
int var_30 = -1074984834;
int var_31 = -173197005;
long long int arr_0 [18] ;
long long int arr_1 [18] ;
int arr_3 [18] ;
_Bool arr_4 [18] [18] ;
long long int arr_6 [18] [18] [18] [18] ;
unsigned char arr_7 [18] [18] [18] [18] ;
int arr_9 [18] [18] [18] [18] [18] [18] ;
unsigned char arr_11 [18] [18] [18] [18] [18] ;
int arr_16 [14] ;
unsigned long long int arr_17 [24] [24] ;
unsigned int arr_18 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 1697288018897583915LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 793243278470355618LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = -1395861782;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -8191138983692506745LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 606080755;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = -1377611019;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_17 [i_0] [i_1] = 7501181022771277139ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_18 [i_0] [i_1] = 824688896U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
