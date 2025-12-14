#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1254903642U;
unsigned int var_7 = 2301349486U;
signed char var_8 = (signed char)38;
unsigned int var_14 = 1198857354U;
unsigned int var_15 = 2576427894U;
unsigned int var_16 = 1401110203U;
int zero = 0;
unsigned int var_18 = 310279293U;
unsigned int var_19 = 2488031266U;
unsigned int var_20 = 1760679467U;
unsigned int var_21 = 2716275654U;
signed char var_22 = (signed char)-65;
unsigned int var_23 = 3562413548U;
unsigned int var_24 = 1300901666U;
signed char arr_2 [23] [23] ;
signed char arr_3 [23] [23] ;
unsigned int arr_4 [23] [23] ;
unsigned int arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)41;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 2163720561U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 3850406796U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
