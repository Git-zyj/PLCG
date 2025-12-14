#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -417871857;
_Bool var_2 = (_Bool)0;
int var_3 = 2108470841;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
long long int var_6 = 4569247112342013978LL;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)79;
int var_9 = 1342180353;
_Bool var_11 = (_Bool)1;
int var_12 = 568030533;
long long int var_13 = -3439322030912130213LL;
int var_14 = -1004417535;
signed char var_15 = (signed char)-111;
int var_16 = 2130171565;
int zero = 0;
signed char var_18 = (signed char)-64;
signed char var_19 = (signed char)19;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
long long int var_22 = 5575573290419797145LL;
int var_23 = -369197560;
long long int var_24 = -8786084396761173861LL;
long long int var_25 = -4112561627411326070LL;
signed char arr_4 [17] [17] ;
long long int arr_6 [17] [17] ;
long long int arr_7 [17] ;
int arr_16 [23] ;
int arr_17 [23] ;
int arr_8 [17] [17] ;
signed char arr_13 [13] [13] ;
_Bool arr_14 [13] [13] ;
long long int arr_18 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)52;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = 1077874612865780683LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 554734393687208634LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = 1656855259;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = 1210680607;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? -763100543 : -1152742286;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = -7362013119044738696LL;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
