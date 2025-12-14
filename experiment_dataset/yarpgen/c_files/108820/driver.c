#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-7;
short var_2 = (short)9570;
unsigned int var_3 = 1637957143U;
long long int var_4 = 1715458143220314657LL;
signed char var_5 = (signed char)50;
signed char var_6 = (signed char)93;
int var_7 = -1778251842;
signed char var_8 = (signed char)-38;
unsigned int var_11 = 3580707048U;
unsigned char var_12 = (unsigned char)16;
unsigned long long int var_14 = 2462985774462587292ULL;
unsigned int var_15 = 1030992443U;
int zero = 0;
int var_17 = -520665568;
unsigned long long int var_18 = 16290894160034681348ULL;
unsigned long long int var_19 = 3227503446942929162ULL;
unsigned int var_20 = 2682839179U;
unsigned int var_21 = 377235008U;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 14478840620761704404ULL;
unsigned short var_24 = (unsigned short)17570;
unsigned short var_25 = (unsigned short)36189;
short var_26 = (short)17209;
long long int var_27 = -8275612217877659045LL;
unsigned long long int var_28 = 7578190311798911018ULL;
int var_29 = -1131946592;
unsigned int var_30 = 3383171021U;
unsigned short var_31 = (unsigned short)65115;
_Bool var_32 = (_Bool)0;
unsigned long long int var_33 = 14709920376698795589ULL;
unsigned short var_34 = (unsigned short)39327;
int var_35 = 1391760509;
_Bool var_36 = (_Bool)1;
_Bool var_37 = (_Bool)1;
unsigned char var_38 = (unsigned char)232;
unsigned long long int var_39 = 5918128857309154040ULL;
long long int var_40 = -7650563227594004195LL;
_Bool var_41 = (_Bool)1;
unsigned char var_42 = (unsigned char)1;
long long int arr_0 [18] ;
int arr_1 [18] ;
int arr_3 [18] ;
int arr_5 [18] ;
int arr_8 [18] ;
_Bool arr_12 [18] [18] ;
long long int arr_16 [18] [18] [18] ;
unsigned char arr_17 [18] [18] [18] ;
short arr_19 [18] [18] [18] ;
signed char arr_20 [18] [18] [18] [18] ;
unsigned long long int arr_23 [18] [18] [18] [18] ;
unsigned int arr_25 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 5345229574632693895LL : -5758072285814345779LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 1980382624;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = -457715646;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -1113602277 : -833029494;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -122458106 : -573800177;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 7659328457230420733LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)29303 : (short)-3811;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)101 : (signed char)-86;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = 8581165825033566504ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 3121437469U : 2970842744U;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
