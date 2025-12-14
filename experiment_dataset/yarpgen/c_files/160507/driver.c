#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 417025153;
unsigned long long int var_5 = 17454262585336756267ULL;
signed char var_6 = (signed char)-57;
short var_9 = (short)-24625;
int var_10 = 1978895181;
unsigned short var_11 = (unsigned short)4391;
unsigned short var_13 = (unsigned short)53239;
signed char var_15 = (signed char)27;
signed char var_16 = (signed char)38;
unsigned short var_17 = (unsigned short)37858;
int zero = 0;
int var_18 = 1512780887;
int var_19 = 22381913;
unsigned int var_20 = 3120167256U;
int var_21 = 1914812749;
unsigned long long int var_22 = 1547927636538636249ULL;
signed char var_23 = (signed char)-107;
short var_24 = (short)-19674;
unsigned char var_25 = (unsigned char)177;
unsigned char var_26 = (unsigned char)79;
_Bool arr_0 [11] ;
signed char arr_1 [11] [11] ;
int arr_5 [18] ;
unsigned short arr_6 [18] ;
unsigned int arr_4 [11] ;
int arr_7 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 369689277;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned short)55964;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 2726144431U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = 374052286;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
