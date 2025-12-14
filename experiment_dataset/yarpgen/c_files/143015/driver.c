#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)26166;
unsigned int var_2 = 614738480U;
unsigned int var_3 = 3651865533U;
long long int var_4 = 4040816461394496352LL;
unsigned char var_6 = (unsigned char)7;
unsigned short var_7 = (unsigned short)50316;
int var_8 = 1716680353;
signed char var_9 = (signed char)85;
short var_10 = (short)-27654;
long long int var_13 = 897732020159734154LL;
signed char var_16 = (signed char)-60;
int zero = 0;
long long int var_17 = -6259124977836760589LL;
unsigned char var_18 = (unsigned char)96;
int var_19 = -977500777;
long long int var_20 = -3140374084868286565LL;
unsigned int var_21 = 2741825467U;
_Bool var_22 = (_Bool)0;
long long int var_23 = 3991026816627542506LL;
signed char var_24 = (signed char)-101;
short var_25 = (short)29162;
int var_26 = 1724509747;
unsigned long long int var_27 = 18322492565234779356ULL;
unsigned short arr_0 [18] ;
int arr_1 [18] [18] ;
int arr_2 [18] ;
unsigned int arr_3 [18] ;
int arr_4 [18] ;
long long int arr_5 [18] ;
unsigned long long int arr_6 [18] ;
long long int arr_7 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)3049;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = -1634554399;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = -2135907489;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 653232831U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -2125631523;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = -1797311166890777724LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 1467206326167533727ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = 8490841314051076297LL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
