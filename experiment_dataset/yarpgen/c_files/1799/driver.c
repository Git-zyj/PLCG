#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21596;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
int var_4 = 1736485000;
_Bool var_6 = (_Bool)0;
long long int var_7 = -5820296137992183029LL;
signed char var_9 = (signed char)105;
signed char var_11 = (signed char)14;
int zero = 0;
signed char var_13 = (signed char)-71;
signed char var_14 = (signed char)85;
signed char var_15 = (signed char)63;
int var_16 = 1513630195;
signed char var_17 = (signed char)-30;
signed char var_18 = (signed char)47;
signed char arr_0 [19] ;
int arr_4 [19] [19] ;
int arr_5 [19] ;
signed char arr_6 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = -1864513247;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = -1293420098;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)7;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
