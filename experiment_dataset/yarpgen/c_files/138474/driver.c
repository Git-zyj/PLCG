#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54597;
unsigned long long int var_4 = 10576601482266380131ULL;
_Bool var_5 = (_Bool)1;
long long int var_7 = 8514865821312161691LL;
int var_8 = 2066257805;
long long int var_9 = 4650098866753630291LL;
unsigned short var_10 = (unsigned short)51146;
short var_11 = (short)28593;
unsigned long long int var_13 = 17692270276183260630ULL;
int var_14 = -2035232217;
int zero = 0;
int var_17 = -1279450648;
signed char var_18 = (signed char)38;
signed char var_19 = (signed char)121;
unsigned short var_20 = (unsigned short)31462;
int var_21 = 597889360;
long long int arr_0 [18] ;
signed char arr_1 [18] [18] ;
int arr_3 [18] ;
short arr_4 [18] [18] ;
_Bool arr_5 [18] ;
unsigned int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 9156495853431305409LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-8;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 1901880942;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (short)4573;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 765696542U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
