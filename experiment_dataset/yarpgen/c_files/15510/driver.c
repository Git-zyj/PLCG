#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2892896593664220214ULL;
signed char var_1 = (signed char)45;
short var_3 = (short)3290;
signed char var_4 = (signed char)103;
unsigned short var_7 = (unsigned short)36096;
unsigned short var_9 = (unsigned short)26510;
short var_10 = (short)7186;
short var_12 = (short)-11870;
short var_16 = (short)-31117;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 4283162086U;
signed char var_21 = (signed char)22;
signed char var_22 = (signed char)-34;
unsigned int var_23 = 1254408552U;
unsigned short var_24 = (unsigned short)13630;
unsigned short var_25 = (unsigned short)22041;
unsigned int arr_0 [15] ;
unsigned int arr_1 [15] ;
short arr_2 [15] [15] [15] ;
signed char arr_4 [15] [15] ;
short arr_6 [15] ;
_Bool arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 309947014U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 2400678146U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)7671;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)98;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (short)14567;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
