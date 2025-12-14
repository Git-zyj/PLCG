#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-53;
signed char var_1 = (signed char)19;
unsigned char var_2 = (unsigned char)78;
unsigned short var_3 = (unsigned short)54393;
int var_6 = 1378499262;
long long int var_7 = -3877584511839195556LL;
signed char var_8 = (signed char)34;
short var_9 = (short)11261;
unsigned char var_10 = (unsigned char)76;
unsigned short var_11 = (unsigned short)15452;
unsigned int var_12 = 209076769U;
long long int var_13 = -4352094037759391063LL;
int zero = 0;
long long int var_14 = -4411724732672731029LL;
unsigned char var_15 = (unsigned char)144;
long long int var_16 = 799735438200278585LL;
short var_17 = (short)6739;
unsigned char var_18 = (unsigned char)54;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
long long int var_21 = -1042966481053335792LL;
unsigned long long int var_22 = 13667942137786388776ULL;
int var_23 = 628971167;
short var_24 = (short)-22331;
signed char var_25 = (signed char)-18;
long long int var_26 = -3542401453360528482LL;
long long int var_27 = -8166491356013004679LL;
int var_28 = -894061216;
unsigned char var_29 = (unsigned char)216;
_Bool var_30 = (_Bool)1;
_Bool var_31 = (_Bool)1;
unsigned long long int var_32 = 16760083736868638044ULL;
unsigned short var_33 = (unsigned short)21166;
long long int var_34 = -7717656284119317996LL;
unsigned char var_35 = (unsigned char)51;
short var_36 = (short)17464;
signed char var_37 = (signed char)18;
int var_38 = -906259660;
signed char var_39 = (signed char)12;
signed char arr_0 [21] [21] ;
short arr_1 [21] [21] ;
long long int arr_2 [21] [21] ;
unsigned long long int arr_4 [17] [17] ;
int arr_5 [17] [17] ;
unsigned long long int arr_8 [13] [13] ;
long long int arr_12 [24] ;
short arr_13 [24] [24] ;
unsigned char arr_14 [24] ;
unsigned long long int arr_17 [15] [15] [15] ;
unsigned int arr_18 [15] [15] [15] ;
short arr_29 [15] [15] [15] ;
unsigned long long int arr_40 [15] [15] [15] ;
int arr_3 [21] ;
signed char arr_26 [15] [15] [15] ;
long long int arr_27 [15] ;
signed char arr_38 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-118;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-16388;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = -683507971177222508LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 15304167422841881612ULL : 9755205139679121536ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = -1366583741;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = 18204757837490087121ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = 8612389384777025946LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = (short)22366;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = (unsigned char)28;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 4900434987481013748ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 3554831514U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)12200 : (short)10866;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 16217748744302723303ULL : 13768095396136472636ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -1461463691;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-1 : (signed char)-40;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? 3084197264075574511LL : 3109787266718772651LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)97 : (signed char)32;
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_38 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
