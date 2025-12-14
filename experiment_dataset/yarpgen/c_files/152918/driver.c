#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 674765948;
signed char var_2 = (signed char)-1;
unsigned int var_3 = 2060560921U;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)50660;
unsigned long long int var_9 = 13169108112159469624ULL;
long long int var_12 = -3711310818621635884LL;
int zero = 0;
long long int var_14 = -7297402950552807079LL;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-7289;
int var_17 = -986785408;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
int arr_2 [13] ;
unsigned int arr_8 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 735682839;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = 324010728U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
