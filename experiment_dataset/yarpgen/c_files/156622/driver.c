#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1070090501310259428LL;
unsigned int var_3 = 3063128581U;
unsigned int var_4 = 2937542517U;
unsigned short var_5 = (unsigned short)6813;
int var_6 = 1712703806;
unsigned int var_7 = 448631483U;
signed char var_9 = (signed char)31;
long long int var_11 = 3287095062945763736LL;
unsigned int var_12 = 3403506870U;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 10155528166048545169ULL;
int var_15 = -404397634;
int zero = 0;
short var_16 = (short)29679;
unsigned int var_17 = 2362769458U;
int var_18 = -2099162448;
unsigned int var_19 = 4237229685U;
int var_20 = 2080756772;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
int var_23 = 567414287;
signed char var_24 = (signed char)74;
long long int var_25 = -8864471747351206489LL;
long long int arr_1 [25] ;
unsigned short arr_2 [25] [25] ;
_Bool arr_15 [20] [20] [20] ;
signed char arr_16 [20] ;
unsigned short arr_17 [20] [20] ;
signed char arr_21 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 6062478790503189681LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)26050;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (signed char)120 : (signed char)-106;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)4503 : (unsigned short)41120;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_21 [i_0] = (signed char)58;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
