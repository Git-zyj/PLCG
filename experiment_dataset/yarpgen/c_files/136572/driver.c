#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)106;
unsigned int var_4 = 4019602831U;
unsigned int var_7 = 422702483U;
int var_8 = 1955113983;
long long int var_14 = 4528811222762629298LL;
int zero = 0;
short var_16 = (short)29792;
short var_17 = (short)16995;
unsigned short var_18 = (unsigned short)1504;
long long int var_19 = -5577296155275456717LL;
_Bool var_20 = (_Bool)1;
unsigned int arr_5 [17] ;
unsigned int arr_4 [10] ;
short arr_8 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 3839871176U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 4231949825U : 32658491U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (short)-25666;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
