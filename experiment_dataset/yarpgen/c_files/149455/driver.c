#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2709;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 3814489609U;
long long int var_3 = 1246368500289197553LL;
unsigned int var_4 = 2192475774U;
int var_5 = -1408094298;
unsigned long long int var_7 = 654976054293123984ULL;
unsigned char var_8 = (unsigned char)140;
long long int var_10 = 2080501818233953931LL;
_Bool var_12 = (_Bool)0;
int var_13 = 1201059942;
unsigned short var_14 = (unsigned short)28306;
unsigned short var_15 = (unsigned short)57330;
unsigned short var_16 = (unsigned short)29926;
_Bool var_17 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = -7952024477893467525LL;
signed char var_20 = (signed char)-110;
signed char var_21 = (signed char)122;
int var_22 = 1210405921;
unsigned char var_23 = (unsigned char)60;
unsigned short arr_0 [15] ;
short arr_1 [15] ;
unsigned char arr_3 [15] [15] [15] ;
unsigned char arr_6 [15] [15] [15] ;
unsigned long long int arr_8 [15] ;
_Bool arr_9 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)46665;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)-8124;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)84 : (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 13608329527495280629ULL : 4728585092843428017ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
