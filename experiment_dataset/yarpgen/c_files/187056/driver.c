#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48196;
unsigned long long int var_2 = 16256235509651784542ULL;
unsigned long long int var_3 = 1705640057536577944ULL;
unsigned int var_4 = 1602373543U;
unsigned long long int var_6 = 3165148968703751809ULL;
unsigned long long int var_7 = 8715602154350355204ULL;
int var_10 = 1905330292;
int var_11 = 1574095569;
unsigned long long int var_12 = 4268899421934333545ULL;
signed char var_13 = (signed char)-70;
unsigned long long int var_14 = 14917048577614752011ULL;
int zero = 0;
short var_15 = (short)-23889;
unsigned long long int var_16 = 2949654747938052241ULL;
int var_17 = -765880446;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)11749;
short var_20 = (short)18127;
unsigned int arr_0 [23] ;
signed char arr_1 [23] [23] ;
unsigned int arr_2 [23] ;
int arr_3 [23] ;
unsigned int arr_5 [23] [23] ;
unsigned long long int arr_8 [21] [21] ;
signed char arr_10 [21] [21] ;
unsigned int arr_6 [23] ;
short arr_7 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 1526400938U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 828565037U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 1764543834;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 2896396218U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = 1670779543074976862ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 4149064531U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (short)19856;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
