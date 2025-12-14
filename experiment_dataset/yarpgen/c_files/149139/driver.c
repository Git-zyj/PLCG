#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)61;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)64;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)54;
signed char var_19 = (signed char)72;
signed char var_20 = (signed char)14;
unsigned long long int var_21 = 2641325980330362193ULL;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 1549109345713311954ULL;
unsigned long long int var_25 = 6158928209055061930ULL;
signed char arr_0 [15] ;
signed char arr_1 [15] ;
_Bool arr_2 [15] ;
signed char arr_6 [11] [11] ;
signed char arr_3 [15] ;
unsigned long long int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)111 : (signed char)-22;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-99 : (signed char)-48;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)100 : (signed char)-23;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 16562147729708870771ULL : 4235199380466549012ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
