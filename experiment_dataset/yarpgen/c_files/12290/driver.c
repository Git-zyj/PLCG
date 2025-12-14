#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16594954631311990344ULL;
unsigned short var_1 = (unsigned short)33936;
unsigned char var_4 = (unsigned char)23;
int var_5 = 1381197437;
unsigned long long int var_7 = 18019817125034201846ULL;
unsigned long long int var_8 = 15556077403167890719ULL;
_Bool var_9 = (_Bool)1;
_Bool var_12 = (_Bool)0;
_Bool var_15 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 11724276234264805627ULL;
int var_18 = 519936189;
unsigned char var_19 = (unsigned char)28;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 14559316259588710053ULL;
unsigned char var_22 = (unsigned char)14;
int var_23 = 393513910;
unsigned long long int var_24 = 16499534332791082250ULL;
unsigned char var_25 = (unsigned char)25;
unsigned long long int var_26 = 6177733983810707813ULL;
int var_27 = -1302111845;
unsigned long long int arr_0 [20] [20] ;
short arr_1 [20] [20] ;
unsigned char arr_3 [20] ;
_Bool arr_5 [14] ;
_Bool arr_6 [14] ;
unsigned long long int arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 14520198862823244424ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (short)19296;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 1909043360024970533ULL;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
