#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_11 = (short)25300;
unsigned int var_12 = 2623680992U;
long long int var_14 = 2304701260007698517LL;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-51;
int zero = 0;
short var_17 = (short)21577;
unsigned char var_18 = (unsigned char)79;
unsigned char var_19 = (unsigned char)236;
signed char var_20 = (signed char)-7;
unsigned char var_21 = (unsigned char)94;
unsigned int var_22 = 4215952237U;
signed char var_23 = (signed char)-115;
_Bool var_24 = (_Bool)1;
short var_25 = (short)14166;
short var_26 = (short)12731;
unsigned int arr_1 [17] ;
unsigned char arr_2 [17] ;
unsigned int arr_5 [13] ;
short arr_7 [20] ;
_Bool arr_9 [20] ;
unsigned char arr_10 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 2261881259U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 3138192430U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (short)-10006;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (unsigned char)231;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
