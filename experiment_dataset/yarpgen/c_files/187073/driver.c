#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1427928853U;
unsigned long long int var_2 = 433444190832970984ULL;
unsigned char var_11 = (unsigned char)158;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_16 = (signed char)-70;
long long int var_17 = 7444470075278303800LL;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 8950520564085574357ULL;
_Bool var_20 = (_Bool)0;
long long int var_21 = -7831032336752656140LL;
unsigned char var_22 = (unsigned char)28;
unsigned long long int var_23 = 7011924568563472970ULL;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)0;
_Bool arr_0 [17] [17] ;
unsigned short arr_1 [17] ;
unsigned short arr_2 [13] [13] ;
short arr_3 [13] ;
unsigned long long int arr_7 [13] ;
unsigned long long int arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)16892;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)63423;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (short)-22763;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 15124713303968850851ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 9072821868786939769ULL;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
