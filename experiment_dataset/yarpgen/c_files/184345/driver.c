#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)125;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 853227387193302562ULL;
int var_7 = -142390392;
unsigned short var_8 = (unsigned short)22213;
signed char var_12 = (signed char)49;
unsigned char var_13 = (unsigned char)86;
signed char var_14 = (signed char)98;
short var_16 = (short)-17930;
int zero = 0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
int var_20 = -241731405;
short var_21 = (short)19089;
unsigned short var_22 = (unsigned short)64657;
unsigned short var_23 = (unsigned short)16317;
signed char var_24 = (signed char)-9;
long long int var_25 = 1224458951846716235LL;
long long int var_26 = -2052633758185689041LL;
_Bool var_27 = (_Bool)1;
int var_28 = -1620343397;
unsigned int arr_0 [21] ;
signed char arr_1 [21] ;
signed char arr_3 [21] ;
signed char arr_5 [21] ;
short arr_6 [21] ;
short arr_9 [21] [21] [21] ;
unsigned long long int arr_14 [21] [21] [21] ;
unsigned short arr_15 [21] [21] ;
short arr_21 [21] [21] ;
unsigned int arr_7 [21] ;
_Bool arr_8 [21] ;
unsigned short arr_11 [21] [21] ;
short arr_16 [21] [21] [21] [21] ;
_Bool arr_17 [21] [21] ;
unsigned int arr_18 [21] [21] [21] ;
short arr_19 [21] [21] [21] ;
signed char arr_22 [21] ;
short arr_26 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 117893703U : 4048817713U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)-52;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (signed char)68;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (signed char)21;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (short)15990;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-8376 : (short)11934;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 732350236058788658ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)64480;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_21 [i_0] [i_1] = (short)-7220;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 1567766823U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)8097 : (unsigned short)49445;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)16731 : (short)24447;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4047609873U : 880284365U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)18564 : (short)-25500;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_22 [i_0] = (signed char)-115;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_26 [i_0] = (short)-20293;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
