#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_5 = 3336317265U;
signed char var_7 = (signed char)22;
long long int var_8 = 5069300012686402578LL;
short var_9 = (short)-5436;
unsigned int var_11 = 2153088393U;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-17319;
unsigned int var_16 = 2244457995U;
short var_18 = (short)-26792;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 204299280U;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)57729;
short var_24 = (short)6434;
unsigned short var_25 = (unsigned short)14526;
signed char arr_1 [20] ;
_Bool arr_2 [20] ;
unsigned int arr_9 [20] [20] [20] ;
signed char arr_12 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 480387829U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (signed char)-79;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
