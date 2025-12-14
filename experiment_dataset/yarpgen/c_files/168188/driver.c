#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3866866515571616684LL;
int var_4 = 2100678478;
signed char var_7 = (signed char)-12;
unsigned int var_8 = 955447822U;
short var_10 = (short)-20816;
int var_14 = 1668234365;
long long int var_16 = -4601440561458748220LL;
int zero = 0;
unsigned long long int var_17 = 9110413235219497451ULL;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1458089460U;
unsigned int arr_0 [13] ;
unsigned long long int arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 2134884743U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 12432899269736710127ULL : 15530788645057028370ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
