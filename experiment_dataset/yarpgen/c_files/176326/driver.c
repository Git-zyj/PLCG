#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40481;
unsigned long long int var_1 = 11293824312326828822ULL;
int var_2 = 1198895209;
unsigned short var_3 = (unsigned short)30617;
int var_4 = -428528893;
unsigned int var_5 = 3606601564U;
unsigned short var_6 = (unsigned short)7958;
unsigned long long int var_7 = 11922894990516852499ULL;
unsigned int var_8 = 131811617U;
unsigned int var_9 = 2057768707U;
unsigned short var_10 = (unsigned short)7679;
int zero = 0;
unsigned int var_11 = 570498609U;
short var_12 = (short)-18280;
unsigned int var_13 = 3582620967U;
long long int var_14 = -4259128428506170227LL;
int var_15 = -1873104434;
short var_16 = (short)29264;
unsigned long long int var_17 = 8259778111509233782ULL;
unsigned short var_18 = (unsigned short)39;
_Bool arr_1 [11] ;
int arr_4 [24] [24] ;
unsigned int arr_7 [24] [24] ;
unsigned int arr_8 [24] ;
short arr_9 [24] ;
unsigned short arr_10 [24] [24] [24] ;
long long int arr_14 [24] [24] ;
unsigned int arr_15 [24] [24] [24] [24] ;
unsigned int arr_16 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 549524806;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 1915533111U : 226420229U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 3763791736U : 1315344351U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (short)-26946;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)13410;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_14 [i_0] [i_1] = 5801441285093240707LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 519135389U : 3232124824U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 884454822U : 1164586274U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
