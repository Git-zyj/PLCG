#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6542257774468767358LL;
unsigned short var_1 = (unsigned short)55708;
signed char var_2 = (signed char)68;
unsigned int var_3 = 3412040877U;
int var_4 = -1040671041;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 7829629618640866229ULL;
unsigned char var_10 = (unsigned char)28;
signed char var_11 = (signed char)-86;
short var_15 = (short)10854;
long long int var_16 = 2523380204425136974LL;
unsigned short var_17 = (unsigned short)45812;
int zero = 0;
long long int var_19 = -4606419312988783904LL;
long long int var_20 = -453689602665921739LL;
unsigned int var_21 = 173381794U;
int var_22 = 1239004384;
unsigned long long int var_23 = 18324130824871891097ULL;
_Bool var_24 = (_Bool)1;
_Bool arr_0 [12] ;
unsigned int arr_1 [12] ;
unsigned long long int arr_2 [12] ;
unsigned long long int arr_3 [12] ;
signed char arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 1750387674U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 16242311389498399494ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 2164754846440689454ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (signed char)3;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
