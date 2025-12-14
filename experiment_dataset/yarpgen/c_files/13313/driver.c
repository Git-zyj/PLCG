#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = 5778163065671425162LL;
unsigned short var_5 = (unsigned short)61592;
long long int var_6 = -2403272311262440636LL;
unsigned char var_7 = (unsigned char)145;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 4256623485U;
int var_10 = -789620690;
signed char var_12 = (signed char)43;
int zero = 0;
long long int var_13 = -3209310459013044068LL;
long long int var_14 = -4869889986722807570LL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 3513190712268736853ULL;
short arr_0 [14] [14] ;
unsigned long long int arr_1 [14] [14] ;
_Bool arr_4 [21] ;
unsigned int arr_5 [21] ;
long long int arr_7 [21] ;
_Bool arr_3 [14] ;
signed char arr_8 [21] [21] ;
unsigned long long int arr_9 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-9357;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 8581874934791316941ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 2426493711U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 2223213251400122782LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-72 : (signed char)124;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 13452142553590366667ULL : 10452807156045001062ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
