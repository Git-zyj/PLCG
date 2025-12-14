#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26624;
signed char var_2 = (signed char)-43;
unsigned int var_4 = 14528901U;
unsigned short var_5 = (unsigned short)5633;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)81;
unsigned char var_9 = (unsigned char)169;
unsigned char var_12 = (unsigned char)147;
int zero = 0;
int var_15 = 331476760;
int var_16 = 1369369135;
int var_17 = -606199129;
unsigned char arr_0 [23] [23] ;
short arr_1 [23] ;
int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)-29399;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 1212266705;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
