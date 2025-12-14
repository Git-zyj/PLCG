#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2877891035793020364LL;
signed char var_1 = (signed char)68;
signed char var_4 = (signed char)5;
signed char var_5 = (signed char)-87;
signed char var_6 = (signed char)-119;
short var_7 = (short)-12566;
unsigned char var_9 = (unsigned char)51;
_Bool var_12 = (_Bool)1;
int var_13 = -1893236059;
int zero = 0;
short var_15 = (short)29230;
unsigned long long int var_16 = 4039963346883993180ULL;
int var_17 = -2133023712;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)69;
signed char arr_0 [23] [23] ;
long long int arr_1 [23] ;
unsigned int arr_5 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-21 : (signed char)-42;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -4934716482141938851LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3142434108U : 1064154329U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
