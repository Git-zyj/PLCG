#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7751595884571006670ULL;
signed char var_10 = (signed char)32;
unsigned int var_12 = 31878082U;
unsigned short var_13 = (unsigned short)45201;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 6240244008619429407ULL;
int var_20 = -2056384278;
unsigned short var_21 = (unsigned short)6377;
signed char var_22 = (signed char)99;
unsigned int var_23 = 2521403567U;
_Bool arr_0 [11] ;
unsigned short arr_2 [11] ;
unsigned long long int arr_3 [11] ;
unsigned char arr_4 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)57090;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 17757374123763774928ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)44;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
