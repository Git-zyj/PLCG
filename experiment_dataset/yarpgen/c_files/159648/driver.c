#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11846;
signed char var_2 = (signed char)73;
long long int var_5 = 5162985444258170397LL;
unsigned long long int var_8 = 13136421866762619306ULL;
long long int var_9 = 4650146103051787643LL;
int zero = 0;
unsigned short var_17 = (unsigned short)34558;
int var_18 = -1286062815;
int var_19 = -226308206;
unsigned long long int var_20 = 7901391736889521496ULL;
unsigned short arr_0 [14] [14] ;
unsigned long long int arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)45809;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 4386975833784726100ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
