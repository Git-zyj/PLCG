#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)38270;
unsigned int var_5 = 781655570U;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 7412148318839760886ULL;
long long int var_11 = -5242217128509135354LL;
signed char var_13 = (signed char)44;
_Bool var_14 = (_Bool)0;
signed char var_16 = (signed char)-91;
int zero = 0;
signed char var_18 = (signed char)-62;
long long int var_19 = 7318890113955108280LL;
signed char var_20 = (signed char)-116;
unsigned short var_21 = (unsigned short)59812;
unsigned short var_22 = (unsigned short)24725;
unsigned int var_23 = 522939426U;
_Bool arr_2 [19] [19] ;
unsigned short arr_6 [14] [14] ;
unsigned int arr_4 [19] ;
unsigned short arr_7 [14] [14] ;
unsigned long long int arr_8 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)40508;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 2759090869U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)39383;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 4355252275644584817ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
