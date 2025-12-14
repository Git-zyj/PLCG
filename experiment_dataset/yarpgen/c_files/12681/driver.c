#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58815;
signed char var_4 = (signed char)-107;
unsigned short var_5 = (unsigned short)53353;
unsigned int var_6 = 3783757973U;
unsigned char var_7 = (unsigned char)8;
int var_8 = -19320934;
int var_12 = 1404872800;
int zero = 0;
int var_14 = 1351721620;
unsigned long long int var_15 = 6981252060985801348ULL;
_Bool var_16 = (_Bool)1;
int var_17 = -1887267205;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)124;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-64;
long long int var_22 = -5843383066777719434LL;
long long int var_23 = 6444846325623173014LL;
unsigned long long int var_24 = 11496483329186505557ULL;
int var_25 = 1455233847;
unsigned short var_26 = (unsigned short)39970;
unsigned short arr_2 [12] [12] ;
short arr_3 [12] ;
unsigned short arr_5 [12] [12] [12] ;
unsigned int arr_8 [14] ;
unsigned short arr_9 [14] [14] ;
unsigned int arr_10 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)7848;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (short)-7211;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)63610;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 2591823292U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)57290;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = 3166750858U;
}

void checksum() {
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
