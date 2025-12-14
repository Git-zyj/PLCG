#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2741295920U;
short var_5 = (short)11454;
int var_6 = 1748270663;
signed char var_8 = (signed char)76;
int var_10 = -915190777;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 2776721266U;
int var_13 = -1216140365;
int var_14 = 671571714;
short var_15 = (short)17197;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)45;
int var_18 = 2106273293;
unsigned long long int var_19 = 1339294354431716369ULL;
signed char var_20 = (signed char)-101;
_Bool var_21 = (_Bool)1;
int var_22 = 1693926744;
unsigned int var_23 = 1165825411U;
signed char var_24 = (signed char)-31;
short arr_1 [24] [24] ;
short arr_5 [24] ;
int arr_7 [24] ;
signed char arr_3 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (short)19984;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (short)11575;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 1050621042;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)119;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
