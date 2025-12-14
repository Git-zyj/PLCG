#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)252;
unsigned long long int var_3 = 7065701362935819416ULL;
unsigned int var_7 = 2218338911U;
_Bool var_10 = (_Bool)0;
unsigned short var_13 = (unsigned short)44315;
int zero = 0;
long long int var_17 = 9169501000555449556LL;
short var_18 = (short)31759;
short var_19 = (short)-12918;
long long int var_20 = 6757125263239980837LL;
signed char var_21 = (signed char)97;
short var_22 = (short)13393;
signed char var_23 = (signed char)-11;
long long int var_24 = 6608695627477987118LL;
unsigned int var_25 = 3834776387U;
short var_26 = (short)-2311;
int var_27 = -1983986621;
unsigned short var_28 = (unsigned short)46503;
unsigned long long int arr_0 [19] ;
_Bool arr_1 [19] [19] ;
_Bool arr_5 [19] ;
unsigned char arr_10 [19] ;
unsigned short arr_11 [19] [19] ;
_Bool arr_12 [19] [19] [19] ;
_Bool arr_3 [19] ;
unsigned char arr_4 [19] ;
int arr_22 [19] ;
int arr_23 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 15890923077439099051ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)27878;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? -35244791 : -627735879;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = -1821729826;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
