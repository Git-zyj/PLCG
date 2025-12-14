#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)113;
short var_1 = (short)-13740;
signed char var_2 = (signed char)98;
long long int var_3 = -2754418531214521525LL;
unsigned long long int var_4 = 15782145448626493564ULL;
short var_5 = (short)-26284;
unsigned short var_6 = (unsigned short)21392;
short var_7 = (short)2439;
short var_8 = (short)-15083;
unsigned int var_9 = 1127049299U;
unsigned short var_10 = (unsigned short)57361;
unsigned long long int var_11 = 2973126716145398296ULL;
short var_12 = (short)11456;
unsigned long long int var_13 = 7170670441025376797ULL;
unsigned long long int var_14 = 7516937570195577981ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)113;
unsigned char var_16 = (unsigned char)18;
unsigned int var_17 = 2300767655U;
short var_18 = (short)-18976;
signed char var_19 = (signed char)81;
unsigned long long int var_20 = 13315491363029719829ULL;
signed char var_21 = (signed char)62;
unsigned int var_22 = 756341210U;
unsigned int var_23 = 3345611497U;
short var_24 = (short)-14993;
long long int var_25 = 7542551114202772799LL;
unsigned short var_26 = (unsigned short)30849;
short var_27 = (short)-29979;
short var_28 = (short)-31682;
long long int var_29 = 7228670484498480644LL;
short var_30 = (short)-16839;
unsigned long long int arr_0 [23] ;
_Bool arr_1 [23] ;
_Bool arr_3 [12] ;
short arr_4 [12] ;
unsigned short arr_7 [18] ;
int arr_8 [18] ;
short arr_9 [23] [23] ;
unsigned long long int arr_10 [23] [23] ;
_Bool arr_13 [23] [23] ;
short arr_14 [23] ;
short arr_16 [23] [23] ;
_Bool arr_19 [23] [23] ;
short arr_2 [23] ;
unsigned short arr_5 [12] ;
short arr_11 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 17982632148175415471ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (short)27678;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (unsigned short)5796;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 812460829;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (short)12408;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = 17966962014389747211ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (short)8960;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_16 [i_0] [i_1] = (short)-8051;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_19 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)-3552;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned short)14950;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (short)32196;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
