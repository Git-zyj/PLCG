#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16696444707933049091ULL;
unsigned char var_1 = (unsigned char)33;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)111;
short var_5 = (short)-20685;
int var_6 = 834310719;
signed char var_7 = (signed char)-16;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)65;
unsigned int var_10 = 3792122056U;
short var_11 = (short)-25092;
signed char var_12 = (signed char)118;
unsigned short var_14 = (unsigned short)50346;
unsigned short var_15 = (unsigned short)16015;
unsigned int var_16 = 2879202238U;
long long int var_17 = 8603850159488117432LL;
unsigned int var_18 = 565800242U;
unsigned char var_19 = (unsigned char)0;
int zero = 0;
unsigned long long int var_20 = 10766236841054444265ULL;
unsigned int var_21 = 3436551882U;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)228;
unsigned long long int var_24 = 7412338724195721857ULL;
long long int var_25 = -277229406130446040LL;
unsigned long long int var_26 = 4000273314512440682ULL;
unsigned char var_27 = (unsigned char)13;
unsigned char var_28 = (unsigned char)206;
signed char var_29 = (signed char)40;
short var_30 = (short)-23431;
unsigned short var_31 = (unsigned short)60658;
short var_32 = (short)30184;
_Bool var_33 = (_Bool)1;
signed char var_34 = (signed char)-86;
int var_35 = -1501495805;
unsigned short var_36 = (unsigned short)30424;
signed char var_37 = (signed char)24;
_Bool var_38 = (_Bool)0;
short var_39 = (short)-3845;
_Bool var_40 = (_Bool)1;
unsigned short var_41 = (unsigned short)29295;
int var_42 = -2053238031;
unsigned int var_43 = 2597742819U;
unsigned int var_44 = 2504004587U;
int arr_0 [24] ;
unsigned long long int arr_1 [24] ;
unsigned short arr_2 [24] ;
unsigned char arr_4 [13] [13] ;
signed char arr_5 [13] [13] ;
long long int arr_8 [23] ;
unsigned short arr_9 [23] [23] ;
long long int arr_10 [23] [23] ;
int arr_11 [21] [21] ;
unsigned char arr_12 [21] ;
unsigned int arr_17 [17] [17] ;
unsigned int arr_18 [17] ;
unsigned char arr_20 [25] [25] ;
unsigned char arr_21 [25] ;
long long int arr_22 [22] ;
unsigned int arr_23 [22] ;
unsigned int arr_28 [22] ;
signed char arr_29 [22] [22] ;
unsigned char arr_30 [22] [22] ;
unsigned short arr_32 [22] ;
unsigned int arr_33 [22] ;
long long int arr_3 [24] ;
unsigned int arr_6 [13] ;
int arr_15 [21] [21] ;
signed char arr_19 [17] ;
long long int arr_26 [22] [22] ;
unsigned int arr_27 [22] ;
unsigned int arr_36 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -602394336;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 16657664987370059611ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)21880;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-106;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = 4051623692441856401LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)14073;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = -8830239310428332550LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = 706412070;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_17 [i_0] [i_1] = 2111728460U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = 2933453839U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = 3886593372730459487LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_23 [i_0] = 1506818481U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_28 [i_0] = 2357011085U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_29 [i_0] [i_1] = (signed char)-78;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_30 [i_0] [i_1] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_32 [i_0] = (unsigned short)42273;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_33 [i_0] = 3681373667U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 8823128474487141689LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 2539467332U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = 2013882254;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = (signed char)79;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_26 [i_0] [i_1] = 1965861142802995607LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_27 [i_0] = 1864024189U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_36 [i_0] [i_1] = 2155830878U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_36 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
