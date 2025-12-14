#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1024827625U;
unsigned int var_2 = 627022403U;
signed char var_5 = (signed char)63;
long long int var_6 = 2608277648449426003LL;
long long int var_7 = 6500199011001948319LL;
unsigned long long int var_10 = 6219236797567927919ULL;
signed char var_11 = (signed char)-116;
long long int var_13 = -7083344567873625046LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)207;
long long int var_16 = -5491778378767302414LL;
unsigned long long int var_17 = 16398612628386008954ULL;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1245613131U;
long long int var_21 = 1495634471593343688LL;
unsigned char arr_0 [14] ;
unsigned long long int arr_1 [14] ;
long long int arr_7 [12] ;
unsigned short arr_3 [14] ;
short arr_4 [14] ;
unsigned long long int arr_5 [14] ;
long long int arr_10 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 3753521069751685494ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 5792694066400946175LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)3926;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (short)-23069;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 2879773845576179115ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -1156288152845213068LL : -7192178729095810033LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
