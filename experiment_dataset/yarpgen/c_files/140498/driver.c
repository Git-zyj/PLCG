#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3320092585U;
unsigned long long int var_1 = 15483661385001406656ULL;
unsigned int var_2 = 3311187906U;
signed char var_4 = (signed char)-79;
unsigned long long int var_5 = 12104830261572409643ULL;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)108;
unsigned int var_18 = 2683615030U;
unsigned int var_19 = 1622932468U;
unsigned long long int var_20 = 536693125369776698ULL;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)84;
signed char var_23 = (signed char)56;
_Bool arr_3 [10] ;
_Bool arr_4 [10] [10] ;
signed char arr_8 [10] [10] [10] ;
unsigned int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 3138594999U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
