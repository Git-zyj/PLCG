#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = 3326071563253668753LL;
signed char var_3 = (signed char)56;
signed char var_5 = (signed char)(-127 - 1);
unsigned long long int var_6 = 11247902848799959612ULL;
unsigned int var_8 = 847785680U;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 2951627531798184109ULL;
unsigned long long int var_11 = 5288263540269415066ULL;
signed char var_15 = (signed char)-97;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1312953690U;
signed char var_19 = (signed char)79;
long long int var_20 = 1911314294762837470LL;
signed char var_21 = (signed char)-87;
unsigned long long int var_22 = 10003471445827699149ULL;
long long int var_23 = -206035960709976395LL;
unsigned long long int var_24 = 13873510721860639445ULL;
signed char var_25 = (signed char)16;
long long int var_26 = -1844738950143871300LL;
_Bool var_27 = (_Bool)1;
unsigned long long int var_28 = 9433319247839913696ULL;
signed char var_29 = (signed char)-28;
long long int var_30 = -8804027708982423153LL;
unsigned int arr_0 [24] [24] ;
unsigned long long int arr_1 [24] ;
unsigned long long int arr_2 [24] ;
unsigned int arr_4 [24] [24] ;
unsigned long long int arr_6 [24] [24] ;
long long int arr_9 [13] ;
_Bool arr_14 [22] ;
unsigned long long int arr_3 [24] ;
_Bool arr_7 [24] ;
unsigned int arr_10 [13] [13] ;
unsigned int arr_15 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 4074953979U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 1175776253364546584ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 14749845473024832933ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 1928638779U : 3295443510U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = 10120700356584569174ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = -5032169929778649761LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 6995472063791435490ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = 4228026176U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? 1837557361U : 3910344434U;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
