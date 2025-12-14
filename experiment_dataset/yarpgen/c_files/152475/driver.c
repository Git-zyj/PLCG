#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)31;
long long int var_3 = -4153450489381517383LL;
unsigned short var_7 = (unsigned short)38518;
long long int var_8 = 5668848061734534543LL;
long long int var_12 = -7261434088585548129LL;
int var_16 = 366425132;
int var_17 = 458852770;
int zero = 0;
long long int var_18 = -2727247043783815687LL;
unsigned char var_19 = (unsigned char)173;
unsigned char var_20 = (unsigned char)134;
unsigned char var_21 = (unsigned char)240;
int var_22 = -116352375;
long long int var_23 = 7239053628888306776LL;
long long int arr_0 [11] ;
long long int arr_2 [11] ;
unsigned short arr_5 [11] ;
long long int arr_6 [11] [11] ;
unsigned short arr_3 [11] ;
int arr_4 [11] [11] ;
unsigned short arr_7 [11] [11] ;
int arr_8 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -1869612468600260587LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 4516960965418312484LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned short)33976;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = -2754497165136311512LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned short)26317;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 793082872;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)18932;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = -245463713;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
