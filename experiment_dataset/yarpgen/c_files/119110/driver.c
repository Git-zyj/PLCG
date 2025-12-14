#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52933;
unsigned short var_1 = (unsigned short)58044;
unsigned char var_3 = (unsigned char)126;
long long int var_5 = 5206339791411114471LL;
unsigned long long int var_6 = 16222476202339492761ULL;
unsigned long long int var_7 = 8856530538461916836ULL;
unsigned char var_8 = (unsigned char)120;
int var_10 = -1495207269;
long long int var_11 = -7208667152465236621LL;
long long int var_12 = -2379829006100434186LL;
unsigned long long int var_13 = 1305429113592332701ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)92;
short var_16 = (short)10234;
int var_17 = 69584218;
unsigned short var_18 = (unsigned short)58114;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 4235418462U;
unsigned short var_21 = (unsigned short)23861;
unsigned long long int var_22 = 13603176668212006876ULL;
unsigned short var_23 = (unsigned short)7002;
long long int var_24 = -5677197029098493226LL;
long long int var_25 = -6328316034974448882LL;
unsigned int var_26 = 193000411U;
unsigned short var_27 = (unsigned short)61540;
long long int var_28 = 4121232067578314440LL;
unsigned short var_29 = (unsigned short)62196;
unsigned short var_30 = (unsigned short)33506;
unsigned long long int var_31 = 1036045506002455452ULL;
_Bool arr_0 [23] [23] ;
unsigned short arr_1 [23] ;
unsigned long long int arr_4 [18] ;
short arr_8 [18] [18] [18] ;
unsigned char arr_11 [18] [18] [18] [18] ;
unsigned int arr_14 [18] [18] [18] [18] ;
_Bool arr_15 [18] [18] [18] [18] ;
unsigned char arr_16 [18] ;
short arr_17 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)9763;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 2563434405826193748ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)-19461;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 1310974343U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = (short)9805;
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
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
