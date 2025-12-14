#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)455;
unsigned short var_1 = (unsigned short)2758;
unsigned char var_3 = (unsigned char)194;
int var_4 = 2389349;
unsigned long long int var_6 = 16975778180370446833ULL;
unsigned char var_7 = (unsigned char)75;
long long int var_10 = 898950312897009977LL;
unsigned char var_14 = (unsigned char)210;
unsigned char var_15 = (unsigned char)232;
int zero = 0;
unsigned long long int var_16 = 3639325575195517742ULL;
signed char var_17 = (signed char)33;
int var_18 = -1654350167;
unsigned char var_19 = (unsigned char)1;
unsigned long long int arr_2 [11] [11] ;
unsigned long long int arr_3 [11] ;
long long int arr_8 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 3299422345774114770ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 16989397492520286016ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = -6671577596966529829LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
