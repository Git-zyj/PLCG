#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29758;
_Bool var_4 = (_Bool)0;
long long int var_5 = -5655506672141922593LL;
unsigned long long int var_8 = 354812647729417682ULL;
long long int var_9 = -107723362117788412LL;
unsigned int var_11 = 2528737731U;
short var_12 = (short)12375;
long long int var_13 = -2370090696680366930LL;
int zero = 0;
unsigned int var_14 = 3803020749U;
long long int var_15 = 2605605333268601543LL;
unsigned int var_16 = 364047826U;
_Bool var_17 = (_Bool)1;
short var_18 = (short)6817;
unsigned short var_19 = (unsigned short)36534;
unsigned short var_20 = (unsigned short)50881;
unsigned long long int var_21 = 17457780205684011449ULL;
short arr_0 [19] ;
_Bool arr_1 [19] ;
long long int arr_3 [13] [13] ;
long long int arr_4 [13] ;
short arr_2 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-13194 : (short)18414;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = -5830132982847039993LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = -243050590818135806LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-1036 : (short)-27846;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
