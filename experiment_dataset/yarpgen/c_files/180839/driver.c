#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 16344727872717764795ULL;
unsigned long long int var_4 = 5388688918873239276ULL;
unsigned int var_6 = 2913979423U;
unsigned long long int var_10 = 16433754342587853830ULL;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-12174;
unsigned long long int var_14 = 12555309652303530372ULL;
unsigned long long int var_15 = 11316447822338902281ULL;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 3505205471U;
unsigned long long int var_18 = 9162452747520555057ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 12074509498088352400ULL;
short var_21 = (short)-5530;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 3726156651U;
unsigned int var_24 = 4123681751U;
unsigned int var_25 = 3286993656U;
unsigned long long int var_26 = 1455010660805525677ULL;
unsigned int var_27 = 2475474836U;
unsigned int arr_0 [11] ;
_Bool arr_1 [11] [11] ;
unsigned int arr_2 [11] [11] ;
_Bool arr_3 [11] ;
short arr_5 [11] ;
unsigned int arr_8 [11] ;
unsigned long long int arr_4 [11] [11] ;
unsigned long long int arr_9 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 2009330619U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 1486123468U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (short)15814;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 23101098U : 2875386682U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 5542359611682898573ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 15948724383420222818ULL : 10200136007343663214ULL;
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
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
