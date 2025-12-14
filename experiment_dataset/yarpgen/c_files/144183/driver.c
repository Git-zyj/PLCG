#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1808803380;
unsigned long long int var_1 = 1553035657534316927ULL;
signed char var_3 = (signed char)-15;
signed char var_4 = (signed char)51;
signed char var_11 = (signed char)-43;
unsigned long long int var_14 = 8299659299631089290ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2162230311U;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 15507561058204375021ULL;
unsigned short var_20 = (unsigned short)17318;
int var_21 = -1971792608;
unsigned long long int var_22 = 14042212239163945599ULL;
unsigned short var_23 = (unsigned short)11959;
signed char var_24 = (signed char)79;
unsigned long long int var_25 = 8530555392366904162ULL;
unsigned short var_26 = (unsigned short)43962;
unsigned long long int var_27 = 4470462394678030923ULL;
unsigned long long int var_28 = 14689062000704385194ULL;
unsigned int var_29 = 3891944803U;
unsigned short var_30 = (unsigned short)11513;
int var_31 = -1428875083;
unsigned long long int var_32 = 5475662425573944308ULL;
int var_33 = 1301436467;
unsigned short arr_2 [25] ;
unsigned short arr_3 [25] ;
long long int arr_4 [25] [25] [25] ;
unsigned short arr_6 [19] ;
unsigned int arr_8 [19] ;
unsigned long long int arr_9 [19] ;
int arr_13 [15] [15] ;
unsigned char arr_15 [15] [15] [15] ;
unsigned long long int arr_5 [25] [25] ;
signed char arr_14 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)56309 : (unsigned short)15348;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)14483 : (unsigned short)49141;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3287923192217021856LL : -3166785154798268218LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned short)21046;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 3423022426U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = 6829810744625312311ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_13 [i_0] [i_1] = -1612570041;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned char)175;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 2485840216908268624ULL : 8556067629980045518ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)-114;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
