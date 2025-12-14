#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 288997168414103509ULL;
signed char var_2 = (signed char)103;
_Bool var_3 = (_Bool)0;
short var_6 = (short)-31159;
short var_7 = (short)11520;
unsigned short var_8 = (unsigned short)53920;
signed char var_9 = (signed char)69;
short var_11 = (short)1224;
long long int var_12 = -7436969019311400520LL;
short var_13 = (short)1567;
unsigned short var_14 = (unsigned short)1746;
signed char var_16 = (signed char)-126;
signed char var_18 = (signed char)-65;
int zero = 0;
signed char var_19 = (signed char)80;
long long int var_20 = 4072540995298180006LL;
unsigned short var_21 = (unsigned short)3127;
int var_22 = 1294916902;
signed char var_23 = (signed char)80;
int var_24 = -1697953386;
long long int var_25 = -1442062532627771303LL;
short arr_0 [15] [15] ;
unsigned short arr_1 [15] ;
signed char arr_4 [15] ;
unsigned short arr_6 [15] ;
signed char arr_10 [15] ;
_Bool arr_2 [15] [15] ;
unsigned long long int arr_3 [15] ;
short arr_7 [15] [15] ;
signed char arr_11 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (short)30493;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)28599;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned short)28912;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 15313159706058482207ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (short)19570;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (signed char)-52;
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
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
