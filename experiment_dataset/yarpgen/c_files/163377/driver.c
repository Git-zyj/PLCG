#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)7493;
unsigned short var_3 = (unsigned short)33331;
unsigned short var_5 = (unsigned short)5753;
short var_6 = (short)-32171;
signed char var_7 = (signed char)-85;
unsigned int var_11 = 3544317899U;
long long int var_12 = -501893485925414366LL;
int var_15 = 916313226;
short var_16 = (short)7899;
int zero = 0;
unsigned long long int var_19 = 12200196504383918284ULL;
unsigned short var_20 = (unsigned short)12354;
unsigned int var_21 = 3150959933U;
signed char var_22 = (signed char)-70;
int var_23 = -1659762086;
unsigned int var_24 = 142246999U;
unsigned char var_25 = (unsigned char)65;
int var_26 = 1214087734;
unsigned char var_27 = (unsigned char)40;
short var_28 = (short)-6141;
unsigned char arr_0 [18] [18] ;
unsigned int arr_8 [18] ;
unsigned int arr_13 [19] ;
unsigned int arr_14 [19] [19] ;
unsigned int arr_15 [19] ;
unsigned char arr_17 [19] ;
signed char arr_7 [18] [18] [18] ;
unsigned short arr_12 [18] [18] ;
long long int arr_18 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)90 : (unsigned char)28;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 1513385171U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 862399137U : 1237286462U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 3764951227U : 528110347U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = 945830567U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-118 : (signed char)-47;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)64704;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = 6773125242877272477LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
