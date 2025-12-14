#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1716124023;
unsigned int var_4 = 2653321478U;
int var_9 = -1352942174;
unsigned long long int var_10 = 3444153594246110337ULL;
unsigned short var_11 = (unsigned short)34860;
unsigned long long int var_13 = 14168055850923311729ULL;
unsigned char var_15 = (unsigned char)115;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-6796;
signed char var_18 = (signed char)-81;
unsigned char var_19 = (unsigned char)86;
signed char var_20 = (signed char)-14;
unsigned long long int var_21 = 3680765975754269164ULL;
unsigned short var_22 = (unsigned short)3817;
unsigned long long int var_23 = 290009450441129301ULL;
unsigned char var_24 = (unsigned char)58;
signed char arr_0 [22] ;
unsigned int arr_1 [22] ;
unsigned long long int arr_2 [22] ;
unsigned int arr_10 [13] ;
long long int arr_13 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 3271988388U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 10637903104205898962ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = 2966075431U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = -4433554448950943351LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
