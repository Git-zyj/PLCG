#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9907427175498733797ULL;
int var_1 = 153525425;
unsigned char var_2 = (unsigned char)73;
unsigned char var_3 = (unsigned char)220;
signed char var_5 = (signed char)-75;
short var_6 = (short)13788;
unsigned char var_7 = (unsigned char)185;
unsigned short var_8 = (unsigned short)8230;
short var_9 = (short)22095;
unsigned int var_10 = 110951945U;
short var_11 = (short)-21327;
short var_12 = (short)-6087;
unsigned int var_16 = 3846311241U;
int zero = 0;
unsigned int var_17 = 4112892525U;
int var_18 = 277097644;
int var_19 = 1518826465;
signed char var_20 = (signed char)16;
short var_21 = (short)-24370;
signed char var_22 = (signed char)12;
short var_23 = (short)12051;
int var_24 = 207271184;
unsigned char var_25 = (unsigned char)166;
short var_26 = (short)29919;
short var_27 = (short)21617;
unsigned int var_28 = 4248449628U;
unsigned char var_29 = (unsigned char)206;
signed char var_30 = (signed char)-78;
int var_31 = 2102621481;
signed char var_32 = (signed char)-49;
unsigned long long int arr_0 [18] ;
short arr_1 [18] [18] ;
unsigned short arr_2 [18] [18] ;
short arr_5 [13] [13] ;
unsigned long long int arr_6 [13] ;
unsigned long long int arr_7 [13] ;
signed char arr_10 [10] ;
int arr_11 [10] [10] ;
unsigned char arr_15 [10] ;
int arr_17 [10] [10] ;
signed char arr_3 [18] ;
unsigned int arr_4 [18] ;
short arr_8 [13] ;
long long int arr_12 [10] ;
long long int arr_13 [10] ;
unsigned short arr_16 [10] [10] ;
int arr_19 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 2154585853487975822ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (short)16986;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)5122;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-804;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 15786070007834536226ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 18281920080335427704ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)108 : (signed char)-99;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 1388738273 : -1843841873;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_17 [i_0] [i_1] = 829664517;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (signed char)15;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 2460424166U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (short)17507;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 7338553877263960383LL : -1326494526300717772LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -3487950428100769074LL : 907625626095985808LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned short)18107;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_19 [i_0] [i_1] = 1099957683;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
