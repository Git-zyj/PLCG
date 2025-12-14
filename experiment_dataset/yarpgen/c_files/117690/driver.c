#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61881;
unsigned long long int var_3 = 2020045001410467527ULL;
unsigned long long int var_4 = 1550715198824131108ULL;
unsigned char var_8 = (unsigned char)10;
unsigned long long int var_9 = 7444223895480462365ULL;
unsigned short var_10 = (unsigned short)8499;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)36494;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 4610378934894047848ULL;
unsigned char var_21 = (unsigned char)235;
_Bool var_22 = (_Bool)0;
short var_23 = (short)28400;
unsigned char var_24 = (unsigned char)66;
long long int var_25 = -508781717069766469LL;
_Bool arr_0 [20] ;
unsigned short arr_1 [20] ;
_Bool arr_2 [20] ;
_Bool arr_3 [20] [20] ;
signed char arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)46936;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (signed char)108;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
