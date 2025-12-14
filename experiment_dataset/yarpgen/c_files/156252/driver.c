#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1033225180087968442LL;
unsigned char var_1 = (unsigned char)207;
unsigned int var_2 = 3198859914U;
unsigned short var_3 = (unsigned short)60242;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)78;
int var_6 = -93231494;
long long int var_9 = -7905181270782911899LL;
unsigned short var_10 = (unsigned short)42922;
unsigned char var_13 = (unsigned char)66;
unsigned long long int var_15 = 12505375007851057114ULL;
unsigned long long int var_16 = 2633487785879902427ULL;
int zero = 0;
unsigned int var_19 = 4028612509U;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
long long int var_22 = 1166059461772387111LL;
unsigned char var_23 = (unsigned char)122;
unsigned char arr_1 [23] ;
unsigned short arr_2 [23] ;
unsigned char arr_3 [23] [23] ;
unsigned short arr_4 [23] ;
long long int arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)39054;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned short)29039;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 1453590356220149437LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
