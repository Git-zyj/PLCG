#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2695533062U;
unsigned short var_1 = (unsigned short)3629;
unsigned int var_2 = 1994364097U;
long long int var_3 = -7587286156156818288LL;
unsigned short var_4 = (unsigned short)23663;
short var_6 = (short)-15513;
unsigned long long int var_7 = 5013931336583963726ULL;
unsigned int var_9 = 414069279U;
unsigned int var_11 = 295018215U;
short var_13 = (short)-17551;
signed char var_14 = (signed char)74;
short var_15 = (short)12472;
long long int var_16 = 365267307251713740LL;
int zero = 0;
long long int var_17 = -5768132967675347755LL;
short var_18 = (short)-16761;
unsigned int var_19 = 923668997U;
unsigned short var_20 = (unsigned short)12244;
signed char var_21 = (signed char)81;
int var_22 = -1368371724;
signed char arr_0 [20] [20] ;
unsigned int arr_1 [20] ;
signed char arr_3 [20] ;
signed char arr_4 [20] ;
long long int arr_5 [20] [20] ;
unsigned long long int arr_11 [10] [10] ;
unsigned short arr_2 [20] ;
signed char arr_6 [20] [20] ;
unsigned long long int arr_7 [20] ;
unsigned int arr_8 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 1283639389U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (signed char)-118;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (signed char)107;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = -3220414847711257422LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = 16986952591356022444ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)62844;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 16475341525395088220ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 3178088403U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
