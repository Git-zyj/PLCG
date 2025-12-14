#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 5359287642550680530ULL;
unsigned long long int var_6 = 9217370145718243341ULL;
int var_9 = 1684717604;
unsigned int var_11 = 1213425107U;
int zero = 0;
long long int var_12 = -5288147591865934500LL;
unsigned long long int var_13 = 8175500595525457903ULL;
long long int var_14 = 8971392742195254133LL;
unsigned int var_15 = 2648296848U;
signed char var_16 = (signed char)34;
unsigned int var_17 = 3940019652U;
_Bool var_18 = (_Bool)0;
int arr_0 [13] [13] ;
unsigned long long int arr_6 [13] ;
_Bool arr_7 [13] ;
unsigned int arr_10 [23] ;
_Bool arr_11 [23] [23] ;
signed char arr_13 [17] [17] ;
long long int arr_15 [17] ;
unsigned int arr_2 [13] ;
_Bool arr_3 [13] ;
unsigned long long int arr_8 [13] ;
_Bool arr_9 [13] ;
unsigned int arr_12 [23] ;
int arr_17 [17] ;
long long int arr_20 [17] [17] [17] ;
unsigned int arr_21 [17] ;
unsigned long long int arr_22 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? -303725394 : 137285089;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 15385552673276128809ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = 1188283000U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)15;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = -6318699640342794262LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2263479968U : 804531621U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = 4978385998653204195ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = 1469688554U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = 304733345;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = -7058855742786891197LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_21 [i_0] = 2091435392U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_22 [i_0] [i_1] = 14959924548131443505ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
