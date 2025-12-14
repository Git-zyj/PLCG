#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)1;
long long int var_5 = -8945074542581529988LL;
short var_6 = (short)14232;
signed char var_8 = (signed char)12;
signed char var_9 = (signed char)103;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)194;
unsigned short var_13 = (unsigned short)16510;
int zero = 0;
unsigned long long int var_16 = 5520116481622673651ULL;
unsigned long long int var_17 = 13214318820240283707ULL;
unsigned char var_18 = (unsigned char)189;
short var_19 = (short)-27438;
short var_20 = (short)1291;
long long int var_21 = 1529185270442128744LL;
_Bool arr_1 [15] ;
signed char arr_2 [15] ;
short arr_3 [15] ;
unsigned short arr_5 [15] ;
short arr_11 [11] [11] [11] ;
long long int arr_6 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)123;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)-12059;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned short)20865;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)25000;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -6775431170910750561LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
