#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 10495355108616872730ULL;
unsigned long long int var_5 = 13296626989003275235ULL;
unsigned long long int var_7 = 7464763119876312882ULL;
_Bool var_8 = (_Bool)1;
int var_14 = -420907311;
int zero = 0;
int var_15 = 242936280;
signed char var_16 = (signed char)36;
unsigned long long int var_17 = 1060411686201078612ULL;
unsigned long long int var_18 = 14304457999322352621ULL;
_Bool var_19 = (_Bool)0;
signed char arr_0 [20] ;
signed char arr_1 [20] ;
unsigned long long int arr_5 [15] ;
unsigned long long int arr_6 [15] [15] ;
signed char arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)-119;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 7960065375895437312ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = 2689317293471141807ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)14;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
