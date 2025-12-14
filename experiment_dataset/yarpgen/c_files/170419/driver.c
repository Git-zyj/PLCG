#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)35788;
int var_6 = -1612026564;
unsigned char var_7 = (unsigned char)30;
long long int var_8 = -6112413745326419495LL;
signed char var_10 = (signed char)66;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-29549;
int zero = 0;
unsigned char var_13 = (unsigned char)60;
long long int var_14 = 7392267379519567861LL;
long long int var_15 = -5652320622663741630LL;
unsigned int var_16 = 624397347U;
_Bool var_17 = (_Bool)0;
long long int var_18 = -5178429980056306259LL;
short var_19 = (short)24070;
unsigned int var_20 = 1115901176U;
signed char var_21 = (signed char)-119;
unsigned char var_22 = (unsigned char)176;
unsigned short arr_0 [10] [10] ;
unsigned short arr_1 [10] [10] ;
long long int arr_2 [21] ;
unsigned long long int arr_3 [21] ;
signed char arr_5 [21] ;
unsigned short arr_6 [21] ;
unsigned char arr_7 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)477;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)39422;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -7774535669579220293LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 12000186163879917684ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned short)695;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)29;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
