#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)62367;
unsigned short var_3 = (unsigned short)6667;
signed char var_4 = (signed char)86;
long long int var_5 = 8815796511420644728LL;
long long int var_6 = -2258062298723586219LL;
unsigned short var_7 = (unsigned short)56405;
unsigned short var_9 = (unsigned short)64571;
int var_11 = 1192482852;
short var_12 = (short)-7594;
signed char var_13 = (signed char)46;
_Bool var_14 = (_Bool)1;
unsigned short var_16 = (unsigned short)4894;
int zero = 0;
short var_17 = (short)20753;
signed char var_18 = (signed char)-101;
unsigned int var_19 = 1917841743U;
_Bool var_20 = (_Bool)1;
unsigned long long int arr_3 [20] ;
signed char arr_4 [20] [20] ;
int arr_7 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 3940419978496278037ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 966197113;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
