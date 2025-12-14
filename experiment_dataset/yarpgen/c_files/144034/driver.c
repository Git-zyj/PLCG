#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)48;
unsigned long long int var_1 = 1170568845507629073ULL;
short var_2 = (short)3953;
long long int var_3 = 2904573977446214540LL;
unsigned char var_4 = (unsigned char)236;
unsigned int var_5 = 129065525U;
unsigned short var_6 = (unsigned short)31584;
short var_7 = (short)1621;
int var_9 = 1006562370;
int var_10 = -2083738900;
int zero = 0;
short var_11 = (short)25294;
short var_12 = (short)-3432;
unsigned short var_13 = (unsigned short)26290;
long long int var_14 = 4424084033141545239LL;
long long int var_15 = -1096768673284458204LL;
short var_16 = (short)-5398;
unsigned char var_17 = (unsigned char)185;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)30384;
unsigned long long int var_20 = 13296417921249493100ULL;
unsigned char arr_0 [23] [23] ;
int arr_1 [23] [23] ;
short arr_3 [23] [23] ;
int arr_4 [23] [23] [23] ;
unsigned long long int arr_6 [23] [23] ;
_Bool arr_11 [22] ;
int arr_2 [23] ;
short arr_9 [12] ;
unsigned char arr_10 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 1697196848;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-31688;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -658116541;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 17997580294492793133ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 1009025447;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (short)-669;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (unsigned char)217;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
