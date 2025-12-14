#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4272746457534586130LL;
unsigned int var_4 = 3721438604U;
long long int var_5 = -7914980667548444702LL;
unsigned int var_7 = 1995615434U;
unsigned short var_8 = (unsigned short)53402;
unsigned char var_11 = (unsigned char)0;
int var_12 = -1049499657;
unsigned int var_13 = 1533002156U;
unsigned int var_14 = 249014697U;
_Bool var_16 = (_Bool)1;
unsigned long long int var_18 = 12916991116878159662ULL;
int zero = 0;
unsigned long long int var_19 = 17654436512870651496ULL;
signed char var_20 = (signed char)41;
unsigned short var_21 = (unsigned short)8470;
unsigned long long int var_22 = 1631672477046071894ULL;
unsigned int var_23 = 3578446688U;
unsigned int var_24 = 2017932204U;
int var_25 = -551664982;
unsigned int arr_0 [23] ;
_Bool arr_3 [10] ;
signed char arr_4 [10] ;
int arr_5 [10] ;
unsigned char arr_2 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 1403495345U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 1434786851;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)133;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
