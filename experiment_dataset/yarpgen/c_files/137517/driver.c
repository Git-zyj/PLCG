#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3466958739U;
int var_3 = -431774991;
signed char var_5 = (signed char)-118;
short var_7 = (short)-9576;
unsigned char var_9 = (unsigned char)233;
short var_10 = (short)-23244;
unsigned long long int var_11 = 4741963226617720789ULL;
int var_12 = -1994155931;
long long int var_13 = 5486918369498066736LL;
short var_14 = (short)2755;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 4560830131371607312ULL;
short var_20 = (short)31274;
unsigned short var_21 = (unsigned short)15060;
unsigned char var_22 = (unsigned char)96;
long long int var_23 = 2494258175968669184LL;
int var_24 = -734089525;
unsigned int var_25 = 1428313898U;
unsigned short arr_0 [13] [13] ;
unsigned int arr_1 [13] ;
int arr_2 [13] ;
int arr_3 [13] ;
unsigned int arr_4 [13] [13] ;
_Bool arr_8 [24] ;
int arr_10 [24] [24] ;
unsigned long long int arr_11 [24] ;
unsigned long long int arr_13 [24] [24] [24] ;
short arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)61835;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 2774820135U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -768253300 : -2125876019;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = -101097594;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 1816971361U : 889936384U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = 1586290113;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = 14501380436198715153ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 1767894782513460863ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)-25876 : (short)-31310;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
