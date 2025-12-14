#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)45714;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)19842;
short var_6 = (short)32227;
signed char var_7 = (signed char)21;
unsigned short var_8 = (unsigned short)29594;
unsigned short var_9 = (unsigned short)36567;
signed char var_10 = (signed char)-57;
int zero = 0;
unsigned long long int var_11 = 2915495885915407776ULL;
unsigned char var_12 = (unsigned char)14;
signed char var_13 = (signed char)-77;
unsigned short var_14 = (unsigned short)60711;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 3966809581420486754ULL;
long long int var_18 = -2545569573581542160LL;
int var_19 = -1762201957;
int var_20 = 1273180375;
unsigned int var_21 = 660740098U;
unsigned char var_22 = (unsigned char)61;
int var_23 = 747067046;
int var_24 = -1659316303;
unsigned long long int var_25 = 9065252691188812473ULL;
unsigned char var_26 = (unsigned char)202;
unsigned int var_27 = 3960690535U;
signed char arr_0 [21] [21] ;
int arr_1 [21] ;
unsigned int arr_8 [21] ;
signed char arr_12 [21] [21] ;
unsigned long long int arr_13 [21] ;
short arr_15 [21] ;
short arr_20 [25] [25] ;
unsigned long long int arr_27 [22] ;
unsigned int arr_2 [21] ;
signed char arr_6 [21] [21] [21] ;
short arr_9 [21] ;
unsigned int arr_18 [21] ;
short arr_21 [25] ;
signed char arr_28 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)105 : (signed char)121;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -692117274;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 609049555U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = 8562908731913096008ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (short)-22199;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_20 [i_0] [i_1] = (short)-30131;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? 16121656615046070541ULL : 9899125175851378358ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 537710432U : 132179302U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)26 : (signed char)96;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)28416 : (short)-24581;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? 3822172717U : 3488614660U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (short)-32603 : (short)21368;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_28 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-88 : (signed char)119;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
