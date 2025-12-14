#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_4 = -2447331139514425771LL;
unsigned int var_5 = 4205872394U;
_Bool var_13 = (_Bool)0;
long long int var_17 = 2928424307294401768LL;
int zero = 0;
unsigned char var_18 = (unsigned char)238;
int var_19 = 1058729505;
int var_20 = 320711703;
unsigned long long int var_21 = 8121426017888568010ULL;
unsigned int var_22 = 1143035971U;
int var_23 = -1581775199;
long long int var_24 = 906909149725667575LL;
long long int var_25 = -689353042341652558LL;
short var_26 = (short)-7699;
unsigned char var_27 = (unsigned char)54;
int arr_0 [13] [13] ;
unsigned int arr_2 [13] ;
_Bool arr_10 [13] [13] [13] ;
int arr_12 [20] ;
unsigned int arr_15 [20] [20] [20] ;
int arr_16 [20] ;
unsigned short arr_3 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 1206935062;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 2888588164U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -1728693198 : -1812077581;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 2876662657U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_16 [i_0] = -2057060821;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)17424;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
