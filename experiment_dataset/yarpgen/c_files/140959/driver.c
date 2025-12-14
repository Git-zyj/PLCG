#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 6365895574483227079ULL;
long long int var_4 = -8313039962723771625LL;
unsigned int var_8 = 1528141554U;
unsigned int var_9 = 317318667U;
long long int var_11 = 1409952189900564622LL;
unsigned short var_12 = (unsigned short)22712;
int var_13 = -2145334925;
int zero = 0;
signed char var_14 = (signed char)-71;
int var_15 = -593603956;
unsigned long long int var_16 = 1672478689132700426ULL;
long long int var_17 = 7172373135777025476LL;
unsigned short var_18 = (unsigned short)49161;
unsigned char var_19 = (unsigned char)161;
int var_20 = 1163963667;
unsigned long long int var_21 = 16958650479298791013ULL;
unsigned short var_22 = (unsigned short)60314;
short arr_0 [24] ;
unsigned char arr_1 [24] ;
unsigned short arr_2 [24] [24] ;
unsigned char arr_5 [23] ;
int arr_6 [23] ;
long long int arr_7 [23] ;
unsigned long long int arr_10 [17] ;
long long int arr_16 [17] [17] [17] [17] ;
unsigned int arr_19 [17] [17] [17] [17] ;
unsigned long long int arr_3 [24] [24] ;
unsigned int arr_4 [24] ;
unsigned short arr_8 [23] ;
_Bool arr_23 [17] [17] [17] [17] [17] ;
unsigned short arr_24 [17] [17] ;
long long int arr_25 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-25299 : (short)-13786;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)12445 : (unsigned short)60545;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned char)229;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 619742973;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = -3302706241467698810LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = 8893133627494553033ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = -6599258240939182966LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 3123232512U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 5202799090126793753ULL : 396132288007793672ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1610001870U : 2222131055U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (unsigned short)6172;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)49653 : (unsigned short)53766;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_25 [i_0] = 3598907461576023754LL;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
