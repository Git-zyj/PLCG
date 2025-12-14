#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2019523849U;
signed char var_6 = (signed char)42;
signed char var_12 = (signed char)-7;
int zero = 0;
unsigned long long int var_13 = 5911167506836742080ULL;
unsigned long long int var_14 = 9902335626863501830ULL;
unsigned long long int var_15 = 10388017781979597568ULL;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-17013;
unsigned int var_18 = 541715912U;
unsigned long long int var_19 = 12150583077129786579ULL;
int arr_2 [10] [10] [10] ;
signed char arr_7 [10] ;
short arr_8 [24] ;
signed char arr_9 [24] ;
unsigned char arr_10 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -747716709;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (signed char)-101;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (short)6263;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (signed char)56;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (unsigned char)213;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
