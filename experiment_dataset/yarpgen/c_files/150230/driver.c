#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 743321955014823611ULL;
int var_3 = 1999887828;
_Bool var_5 = (_Bool)0;
long long int var_6 = 6550839288187097799LL;
unsigned char var_15 = (unsigned char)107;
short var_16 = (short)20230;
signed char var_17 = (signed char)74;
int zero = 0;
signed char var_18 = (signed char)-93;
signed char var_19 = (signed char)112;
_Bool var_20 = (_Bool)1;
int var_21 = -156694878;
unsigned long long int var_22 = 15293876570768246381ULL;
unsigned long long int arr_0 [12] ;
_Bool arr_1 [12] ;
_Bool arr_2 [12] [12] ;
_Bool arr_3 [12] [12] [12] ;
unsigned short arr_4 [12] [12] ;
unsigned long long int arr_5 [12] ;
unsigned int arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 10232703405467604831ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)26149;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 332297598972768562ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 111876534U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
