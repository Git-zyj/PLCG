#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1141740240;
long long int var_4 = -4052189276170766810LL;
int var_6 = -1653826364;
unsigned int var_7 = 3636195119U;
unsigned int var_8 = 1079184143U;
unsigned long long int var_9 = 17088199488041220204ULL;
long long int var_10 = 2274134748518836224LL;
int var_12 = -1488020587;
int var_15 = -769322898;
int zero = 0;
unsigned char var_17 = (unsigned char)125;
unsigned long long int var_18 = 16472357523286780010ULL;
long long int var_19 = 7071193100861333533LL;
unsigned int var_20 = 2856622970U;
int var_21 = -1574472025;
long long int var_22 = -252821234348659824LL;
int var_23 = -614951831;
long long int var_24 = 5870708888172360860LL;
long long int var_25 = 7779035178473865428LL;
int arr_0 [18] ;
_Bool arr_2 [18] ;
_Bool arr_5 [18] [18] [18] ;
long long int arr_8 [18] [18] [18] ;
long long int arr_10 [18] ;
_Bool arr_6 [18] [18] ;
unsigned int arr_7 [18] [18] ;
unsigned char arr_11 [18] ;
long long int arr_14 [18] ;
int arr_15 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 1040449803;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 6041960671417024763LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = 3199062946254473406LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = 987862294U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = 8399970748371544343LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = -1232898206;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
