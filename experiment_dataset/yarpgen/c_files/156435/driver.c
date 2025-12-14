#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1436127678;
int var_2 = 1129490117;
long long int var_3 = 4696512369184462136LL;
unsigned long long int var_5 = 11082797431061715019ULL;
unsigned int var_6 = 300178222U;
long long int var_7 = -8991383399097349240LL;
unsigned long long int var_8 = 15671684396343669464ULL;
int var_9 = -524847259;
unsigned int var_11 = 4284969012U;
int zero = 0;
unsigned long long int var_15 = 14177630318658786541ULL;
long long int var_16 = -4094459884705651113LL;
int var_17 = 281935444;
unsigned long long int var_18 = 16922952719512943601ULL;
unsigned int var_19 = 1596847664U;
int var_20 = -698509144;
int var_21 = 1070418819;
unsigned int var_22 = 3521664179U;
unsigned long long int arr_0 [21] ;
long long int arr_1 [21] ;
unsigned int arr_2 [21] ;
unsigned long long int arr_3 [14] ;
int arr_9 [13] [13] ;
int arr_10 [13] ;
long long int arr_13 [13] [13] [13] ;
int arr_5 [14] ;
long long int arr_14 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 17381525460117864807ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -9071702149802560297LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 3693608866U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 15251609784114347661ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = -961595744;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = -448703340;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 7562906932289241760LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 982095556;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 1174056121527003102LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
