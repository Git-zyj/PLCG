#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31796;
unsigned char var_1 = (unsigned char)91;
unsigned long long int var_2 = 15579952215659041793ULL;
unsigned long long int var_3 = 10714348148300724083ULL;
signed char var_4 = (signed char)-105;
unsigned char var_5 = (unsigned char)244;
unsigned short var_6 = (unsigned short)36487;
short var_8 = (short)7527;
unsigned short var_9 = (unsigned short)27241;
int var_10 = -1294129106;
unsigned long long int var_11 = 15694043152961597837ULL;
long long int var_12 = 2423209853556629645LL;
unsigned long long int var_13 = 8363841955705712211ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)28677;
unsigned long long int var_15 = 15552234517910741634ULL;
int var_16 = 78257750;
unsigned short var_17 = (unsigned short)30530;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)118;
int var_20 = 291606446;
signed char var_21 = (signed char)55;
long long int var_22 = -7062058437986476649LL;
unsigned long long int var_23 = 2712853188574990651ULL;
int var_24 = 1535191303;
unsigned short var_25 = (unsigned short)27349;
unsigned char var_26 = (unsigned char)102;
int var_27 = -283817248;
unsigned int var_28 = 4046427906U;
long long int arr_0 [19] [19] ;
unsigned long long int arr_1 [19] ;
short arr_2 [19] ;
unsigned short arr_4 [19] [19] [19] ;
unsigned short arr_5 [14] ;
_Bool arr_7 [14] [14] ;
unsigned short arr_10 [25] ;
int arr_13 [16] ;
unsigned char arr_16 [16] ;
_Bool arr_17 [12] [12] ;
int arr_9 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = -40101255952873705LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 9522983979864518155ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)23268;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)39533;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned short)35651;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (unsigned short)55231;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = 174035395;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_17 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = -50983280;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
