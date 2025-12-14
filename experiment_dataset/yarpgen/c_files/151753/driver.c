#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 10505773588900577509ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 321666047138793933ULL;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)49;
unsigned long long int var_8 = 5134421745189056238ULL;
signed char var_9 = (signed char)46;
unsigned short var_12 = (unsigned short)53725;
unsigned long long int var_13 = 11936354957098756361ULL;
int var_18 = -1523678930;
int zero = 0;
unsigned short var_19 = (unsigned short)16537;
unsigned short var_20 = (unsigned short)24643;
unsigned long long int arr_2 [25] [25] ;
unsigned long long int arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 4573986069129017134ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 7015898801451946986ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
