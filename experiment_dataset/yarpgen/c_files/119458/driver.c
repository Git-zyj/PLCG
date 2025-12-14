#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17597025601029038553ULL;
unsigned char var_17 = (unsigned char)182;
int zero = 0;
unsigned int var_20 = 2374142281U;
unsigned long long int var_21 = 15412250853638127408ULL;
unsigned char var_22 = (unsigned char)255;
unsigned int var_23 = 597628349U;
_Bool var_24 = (_Bool)1;
short var_25 = (short)-24042;
unsigned int var_26 = 2184404030U;
short arr_0 [16] ;
signed char arr_1 [16] ;
unsigned long long int arr_2 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)6633;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 10309003076866350635ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
