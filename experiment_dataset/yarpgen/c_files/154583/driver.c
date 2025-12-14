#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27623;
signed char var_2 = (signed char)87;
_Bool var_7 = (_Bool)1;
long long int var_8 = -5005104355408352489LL;
long long int var_11 = -6109040759670291429LL;
short var_12 = (short)14239;
int zero = 0;
unsigned long long int var_16 = 708678603574350469ULL;
_Bool var_17 = (_Bool)1;
int var_18 = -747419810;
unsigned long long int var_19 = 3548127300229861017ULL;
long long int var_20 = -204556324708747989LL;
unsigned short arr_1 [23] [23] ;
unsigned char arr_2 [23] ;
int arr_7 [23] ;
unsigned char arr_8 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)7268;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 2141212278;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (unsigned char)213;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
