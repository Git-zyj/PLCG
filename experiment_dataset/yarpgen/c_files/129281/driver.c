#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)-15966;
short var_3 = (short)13226;
unsigned char var_4 = (unsigned char)49;
unsigned long long int var_5 = 14694524544646324875ULL;
short var_6 = (short)9636;
signed char var_7 = (signed char)-1;
unsigned long long int var_8 = 1911747930448441655ULL;
signed char var_12 = (signed char)-41;
unsigned short var_13 = (unsigned short)11452;
unsigned long long int var_14 = 17928598129236131618ULL;
unsigned short var_15 = (unsigned short)8398;
signed char var_16 = (signed char)-118;
unsigned long long int var_17 = 14653388446853378033ULL;
int zero = 0;
long long int var_19 = 5509913544355010406LL;
short var_20 = (short)6697;
long long int var_21 = -8336513926255841934LL;
long long int var_22 = -3476249878723696692LL;
short var_23 = (short)-27907;
unsigned long long int arr_0 [19] [19] ;
signed char arr_1 [19] ;
long long int arr_2 [19] ;
signed char arr_3 [19] ;
long long int arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 12510167809410897113ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)11;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -4766607666551885947LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = -6295793636987929441LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
