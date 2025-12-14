#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12983;
short var_3 = (short)-25475;
long long int var_4 = -7953293124649822272LL;
int zero = 0;
unsigned int var_17 = 3704776423U;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)33881;
unsigned long long int var_20 = 15926731868596439568ULL;
unsigned char var_21 = (unsigned char)199;
int var_22 = 692824058;
signed char var_23 = (signed char)-63;
short var_24 = (short)20097;
_Bool arr_0 [23] ;
_Bool arr_1 [23] ;
short arr_2 [23] [23] ;
unsigned short arr_9 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-21656;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (unsigned short)8189;
}

void checksum() {
    hash(&seed, var_17);
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
