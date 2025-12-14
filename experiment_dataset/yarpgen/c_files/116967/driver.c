#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1736030615;
int var_5 = -891129295;
unsigned long long int var_6 = 16687353322131241145ULL;
int var_10 = -2035708734;
unsigned long long int var_14 = 3648451782985960164ULL;
short var_15 = (short)25751;
unsigned int var_16 = 33971370U;
int zero = 0;
unsigned char var_17 = (unsigned char)226;
signed char var_18 = (signed char)5;
unsigned int var_19 = 1442277438U;
short var_20 = (short)29519;
unsigned int var_21 = 2732759276U;
_Bool arr_1 [22] [22] ;
unsigned int arr_7 [22] [22] ;
unsigned short arr_8 [22] [22] ;
long long int arr_6 [22] ;
int arr_9 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 3001039819U : 667680644U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)49819 : (unsigned short)34996;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = -3228611694579878690LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 345807086 : -1975048555;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
