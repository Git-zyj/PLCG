#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1956064060U;
signed char var_1 = (signed char)23;
unsigned int var_6 = 626255565U;
_Bool var_7 = (_Bool)1;
long long int var_8 = 3979462726828359471LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)10;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2007004548U;
unsigned char var_18 = (unsigned char)11;
short var_19 = (short)19504;
_Bool var_20 = (_Bool)1;
_Bool arr_0 [12] ;
unsigned char arr_1 [12] [12] ;
unsigned int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)228;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 2979333590U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
