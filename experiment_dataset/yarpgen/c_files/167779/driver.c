#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9128;
signed char var_1 = (signed char)-99;
unsigned short var_2 = (unsigned short)13335;
unsigned short var_3 = (unsigned short)2004;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-92;
unsigned int var_7 = 2915122700U;
long long int var_9 = -5551840447337953207LL;
unsigned char var_10 = (unsigned char)249;
unsigned char var_11 = (unsigned char)53;
int zero = 0;
unsigned long long int var_12 = 17874724664283574506ULL;
signed char var_13 = (signed char)18;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)26311;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 12960922288378601705ULL;
long long int var_18 = -5942371353529576453LL;
unsigned short var_19 = (unsigned short)414;
unsigned int var_20 = 1788468627U;
signed char var_21 = (signed char)-74;
signed char var_22 = (signed char)-119;
unsigned int var_23 = 238888392U;
long long int var_24 = -6796784867213896957LL;
signed char arr_0 [24] [24] ;
long long int arr_2 [24] ;
_Bool arr_3 [24] [24] ;
unsigned char arr_7 [15] [15] ;
signed char arr_9 [15] [15] ;
unsigned long long int arr_17 [24] ;
signed char arr_18 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = -3303872914961455128LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)49 : (signed char)-33;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = 12508293407214059097ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = (signed char)9;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
