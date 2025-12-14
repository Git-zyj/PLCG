#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)35;
unsigned char var_1 = (unsigned char)189;
unsigned int var_6 = 735848269U;
unsigned int var_7 = 3763971531U;
_Bool var_8 = (_Bool)1;
int var_9 = 2098285877;
unsigned char var_10 = (unsigned char)179;
_Bool var_13 = (_Bool)1;
long long int var_14 = 6017670459836928126LL;
unsigned long long int var_15 = 4794991255603048473ULL;
int zero = 0;
unsigned long long int var_16 = 1760416916141898354ULL;
int var_17 = 198601206;
unsigned short var_18 = (unsigned short)58567;
unsigned short var_19 = (unsigned short)11767;
unsigned long long int var_20 = 9353591832615396001ULL;
long long int var_21 = 8585323408249224351LL;
unsigned short var_22 = (unsigned short)7849;
unsigned long long int var_23 = 1335802982230575749ULL;
long long int arr_0 [22] ;
_Bool arr_1 [22] [22] ;
unsigned char arr_9 [13] ;
unsigned long long int arr_2 [22] [22] ;
int arr_3 [22] ;
unsigned int arr_6 [22] ;
_Bool arr_7 [22] [22] ;
unsigned int arr_10 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 1650035181837935431LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)30 : (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 15135909887374539274ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 609432586;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 3583214855U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 747513278U : 1140295460U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
