#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1745482178;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)54264;
unsigned char var_3 = (unsigned char)101;
long long int var_4 = 1360193127406373039LL;
signed char var_5 = (signed char)-126;
short var_6 = (short)-12588;
long long int var_7 = -1065255274232527818LL;
unsigned short var_9 = (unsigned short)15539;
short var_11 = (short)4339;
unsigned int var_12 = 3490839596U;
unsigned short var_14 = (unsigned short)43496;
unsigned long long int var_15 = 9544108356386877211ULL;
int var_16 = 1723322560;
int zero = 0;
unsigned char var_18 = (unsigned char)90;
unsigned long long int var_19 = 3025571504377793345ULL;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)127;
short var_22 = (short)3574;
unsigned int var_23 = 337483039U;
unsigned int var_24 = 3096145100U;
long long int var_25 = -5429851172273661022LL;
unsigned char var_26 = (unsigned char)193;
long long int var_27 = 96458488278756358LL;
long long int var_28 = 2527005729875223867LL;
unsigned long long int var_29 = 14789258291540719732ULL;
unsigned char var_30 = (unsigned char)63;
unsigned long long int var_31 = 12703930678817449350ULL;
signed char var_32 = (signed char)-83;
signed char var_33 = (signed char)94;
unsigned int var_34 = 3248562221U;
unsigned int var_35 = 1662842751U;
_Bool var_36 = (_Bool)0;
signed char var_37 = (signed char)55;
unsigned char arr_0 [17] ;
_Bool arr_2 [17] ;
unsigned int arr_4 [17] [17] [17] ;
short arr_10 [24] [24] [24] ;
signed char arr_11 [24] [24] [24] ;
_Bool arr_14 [24] [24] [24] [24] ;
short arr_18 [24] [24] ;
long long int arr_21 [24] [24] [24] ;
unsigned char arr_22 [24] [24] ;
unsigned int arr_31 [18] ;
int arr_19 [24] ;
unsigned short arr_30 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2318538410U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)13173 : (short)-13324;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)91;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)26185 : (short)1810;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -5307545454517508167LL : -5229791471414558862LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_22 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)236 : (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_31 [i_0] = 345792979U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? -1766699409 : -518848212;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)56459 : (unsigned short)61970;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
