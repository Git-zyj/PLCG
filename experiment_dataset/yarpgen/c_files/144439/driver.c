#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 3406051518U;
int zero = 0;
unsigned char var_12 = (unsigned char)92;
unsigned int var_13 = 1177097205U;
_Bool var_14 = (_Bool)1;
short var_15 = (short)27732;
short var_16 = (short)16162;
unsigned long long int var_17 = 3443673378754503474ULL;
unsigned char var_18 = (unsigned char)120;
long long int var_19 = -8323067763059813126LL;
unsigned short var_20 = (unsigned short)37732;
unsigned int var_21 = 3970312736U;
unsigned char var_22 = (unsigned char)132;
signed char var_23 = (signed char)23;
unsigned int var_24 = 1709930764U;
_Bool var_25 = (_Bool)1;
_Bool var_26 = (_Bool)1;
unsigned char arr_1 [25] ;
short arr_2 [25] ;
_Bool arr_3 [24] ;
int arr_7 [24] [24] ;
short arr_10 [24] [24] [24] ;
_Bool arr_13 [19] [19] ;
long long int arr_19 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)-17964;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = -1875486295;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)-5271;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_19 [i_0] = -5135588557895546960LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
