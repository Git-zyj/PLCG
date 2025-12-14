#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = 3302655770798694966LL;
int var_3 = -406053353;
unsigned long long int var_5 = 17234919204180432826ULL;
short var_8 = (short)29098;
unsigned int var_9 = 1925222787U;
signed char var_10 = (signed char)45;
int var_12 = -1558110504;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
int var_15 = -2134870731;
unsigned short var_16 = (unsigned short)19163;
int zero = 0;
short var_17 = (short)15279;
unsigned int var_18 = 2902468464U;
unsigned long long int var_19 = 2138457119004339942ULL;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 4014183264U;
short var_22 = (short)-17855;
unsigned int arr_0 [11] ;
unsigned short arr_1 [11] [11] ;
short arr_2 [11] ;
short arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 1236810720U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)61554;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)14534;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (short)-16008;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
