#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4273988473997664545LL;
short var_2 = (short)14368;
signed char var_3 = (signed char)-70;
long long int var_4 = -7085669755916698348LL;
short var_6 = (short)27771;
unsigned int var_9 = 664394350U;
signed char var_11 = (signed char)-99;
int zero = 0;
unsigned short var_13 = (unsigned short)59983;
unsigned short var_14 = (unsigned short)5387;
int var_15 = -1959469726;
long long int var_16 = 1792163119102004643LL;
signed char var_17 = (signed char)-18;
unsigned int var_18 = 3653454207U;
unsigned short arr_0 [15] [15] ;
int arr_2 [23] ;
signed char arr_3 [23] ;
long long int arr_4 [23] ;
int arr_5 [23] ;
unsigned short arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)42425;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 572698943;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = -8051675986369256547LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 489563924;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned short)16599;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
