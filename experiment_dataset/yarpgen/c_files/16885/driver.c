#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17942;
short var_1 = (short)-3486;
long long int var_3 = 7149505228734012492LL;
unsigned short var_4 = (unsigned short)22744;
short var_5 = (short)17805;
short var_7 = (short)-16073;
int var_10 = 70045541;
unsigned short var_13 = (unsigned short)22027;
long long int var_14 = 6990352184874738529LL;
long long int var_15 = -5927278020643378441LL;
signed char var_16 = (signed char)122;
int zero = 0;
unsigned long long int var_17 = 11903849858784426876ULL;
signed char var_18 = (signed char)8;
unsigned long long int var_19 = 17831293641608082067ULL;
long long int var_20 = 7302493957357878476LL;
short var_21 = (short)-8116;
unsigned int var_22 = 2252113695U;
long long int var_23 = -3942575040611744677LL;
signed char arr_3 [24] [24] ;
short arr_5 [24] ;
long long int arr_7 [24] [24] [24] [24] [24] [24] ;
unsigned long long int arr_9 [24] [24] [24] ;
_Bool arr_14 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-13 : (signed char)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)10884 : (short)18363;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 1444056952928429324LL : -3938265488306753437LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3240742241807002520ULL : 17111193508704129216ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
