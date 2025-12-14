#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17652848926419537547ULL;
unsigned int var_1 = 1044488079U;
long long int var_2 = 3503630269056657557LL;
signed char var_3 = (signed char)-25;
short var_4 = (short)26240;
signed char var_10 = (signed char)-18;
unsigned char var_11 = (unsigned char)81;
unsigned long long int var_13 = 5040500605680994303ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)17818;
unsigned int var_17 = 464546656U;
unsigned int var_18 = 591199162U;
long long int var_19 = 3663979233622007720LL;
unsigned int var_20 = 3604444001U;
int var_21 = -1736878396;
long long int var_22 = -2014335143239114305LL;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)149;
signed char var_25 = (signed char)-85;
int arr_1 [20] [20] ;
short arr_2 [20] [20] ;
unsigned short arr_4 [20] [20] ;
long long int arr_6 [16] ;
unsigned short arr_7 [16] [16] ;
unsigned long long int arr_8 [16] [16] [16] ;
unsigned char arr_14 [15] ;
long long int arr_11 [16] [16] ;
int arr_15 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 1124381444 : 1754244030;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)23024 : (short)-10107;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)28189;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = -3643240233512241176LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)25798;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 900589193314170205ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = -3084042466831986307LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? 1983479354 : -877294037;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
