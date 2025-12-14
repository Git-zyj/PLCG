#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5472784958999905252LL;
unsigned char var_2 = (unsigned char)95;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)207;
_Bool var_6 = (_Bool)0;
unsigned short var_10 = (unsigned short)52750;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)117;
int zero = 0;
short var_13 = (short)-9512;
short var_14 = (short)-17848;
unsigned char var_15 = (unsigned char)51;
unsigned int var_16 = 876309253U;
short var_17 = (short)22570;
short var_18 = (short)-13083;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)96;
int var_21 = 2090561460;
long long int arr_0 [13] ;
unsigned long long int arr_5 [23] ;
long long int arr_6 [23] [23] ;
short arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 840525870298187869LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 10480979031377677206ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = -5805586884598935816LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-17165;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
