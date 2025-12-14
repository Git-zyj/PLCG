#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2240580716203778512ULL;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-86;
long long int var_11 = 4512685853575749728LL;
int var_12 = 301150531;
unsigned char var_13 = (unsigned char)134;
signed char var_15 = (signed char)-105;
signed char var_17 = (signed char)105;
unsigned char var_18 = (unsigned char)64;
int zero = 0;
unsigned long long int var_19 = 7569694031945015482ULL;
unsigned short var_20 = (unsigned short)22115;
int var_21 = -1784983508;
signed char var_22 = (signed char)-115;
unsigned char var_23 = (unsigned char)184;
int var_24 = -825492008;
unsigned long long int var_25 = 12510415643383043473ULL;
unsigned long long int var_26 = 2686966923107767862ULL;
unsigned long long int arr_0 [11] ;
int arr_2 [11] ;
unsigned long long int arr_6 [13] [13] ;
unsigned long long int arr_9 [13] ;
short arr_5 [12] ;
long long int arr_10 [13] ;
int arr_11 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 3379971930946444578ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -1707053132;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = 6607576899260408000ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = 14677247592303468112ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-219 : (short)32364;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = -2435571026750285163LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = 488885113;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
