#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9050759243206352891ULL;
signed char var_5 = (signed char)14;
int var_8 = -490599687;
long long int var_13 = -3741713582498465656LL;
signed char var_16 = (signed char)102;
signed char var_17 = (signed char)-112;
int zero = 0;
long long int var_19 = 5873367256759555456LL;
short var_20 = (short)-29313;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)197;
signed char arr_0 [11] ;
unsigned long long int arr_4 [11] [11] [11] ;
int arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)-71;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 9491329345892132769ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 42407457 : 932457073;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
