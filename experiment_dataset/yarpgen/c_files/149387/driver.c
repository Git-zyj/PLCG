#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12254767797735209233ULL;
int var_3 = 1759837467;
int var_6 = 880642137;
unsigned char var_7 = (unsigned char)238;
unsigned char var_8 = (unsigned char)140;
unsigned char var_9 = (unsigned char)61;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)0;
short var_14 = (short)-31984;
int zero = 0;
short var_15 = (short)-4626;
short var_16 = (short)-1569;
unsigned long long int var_17 = 3485305943889753379ULL;
unsigned long long int var_18 = 1217336413818726663ULL;
short var_19 = (short)14472;
int var_20 = -122770866;
unsigned char var_21 = (unsigned char)121;
short var_22 = (short)-29257;
signed char arr_0 [19] [19] ;
unsigned char arr_1 [19] ;
long long int arr_2 [19] ;
int arr_5 [19] [19] ;
short arr_7 [19] ;
_Bool arr_3 [19] ;
short arr_11 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -8441157350289975872LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = -1855732378;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (short)-25480;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_11 [i_0] [i_1] = (short)9286;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
