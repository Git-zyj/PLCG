#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-472;
unsigned short var_1 = (unsigned short)55284;
long long int var_2 = -5368955100422561451LL;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 2993454352U;
short var_6 = (short)-28561;
int var_7 = 76121794;
signed char var_8 = (signed char)-23;
long long int var_10 = -4588330501536296551LL;
long long int var_11 = -8158122340850937329LL;
int zero = 0;
long long int var_12 = -9165719231679912751LL;
short var_13 = (short)-14946;
unsigned int var_14 = 2694182857U;
unsigned int var_15 = 2298589288U;
_Bool var_16 = (_Bool)0;
long long int var_17 = -2334880106379610474LL;
short var_18 = (short)10347;
unsigned long long int var_19 = 1022775260869596567ULL;
short var_20 = (short)-24993;
unsigned int arr_0 [17] ;
unsigned int arr_1 [17] [17] ;
_Bool arr_3 [24] ;
unsigned int arr_4 [24] ;
short arr_5 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 2107241731U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 1200429210U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2229363870U : 3989589102U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)14422 : (short)-21728;
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
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
