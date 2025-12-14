#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-24894;
unsigned int var_2 = 438284132U;
long long int var_3 = 2620672575449398973LL;
unsigned int var_4 = 3759915196U;
long long int var_6 = -25096293822734118LL;
unsigned int var_7 = 140596155U;
unsigned int var_8 = 1269099887U;
signed char var_9 = (signed char)-26;
unsigned int var_11 = 1250820178U;
int zero = 0;
unsigned int var_12 = 1780479582U;
unsigned int var_13 = 2584782159U;
unsigned int var_14 = 3766921889U;
signed char var_15 = (signed char)99;
unsigned int var_16 = 4227191109U;
short var_17 = (short)19326;
unsigned int var_18 = 4008855516U;
long long int var_19 = 2777518078530377600LL;
unsigned int arr_0 [16] ;
unsigned int arr_1 [16] [16] ;
unsigned int arr_6 [24] ;
long long int arr_8 [24] ;
unsigned int arr_9 [24] ;
unsigned int arr_11 [21] ;
long long int arr_12 [21] ;
unsigned int arr_15 [21] ;
unsigned int arr_17 [21] [21] ;
long long int arr_4 [16] [16] ;
short arr_5 [16] ;
unsigned int arr_10 [24] [24] ;
unsigned int arr_13 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 567270667U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 3059886891U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 4109160950U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = -2601070460355372062LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = 572322673U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = 2934540069U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = -3211662537582140263LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = 1548794334U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? 4038498835U : 3092474560U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? -1242964858179544354LL : -4214669738215138900LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-32605 : (short)5683;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = 532237023U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = 3261965827U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
