#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 10207875685389361402ULL;
unsigned long long int var_2 = 10149682909257015669ULL;
unsigned char var_6 = (unsigned char)184;
unsigned int var_11 = 2558384278U;
unsigned long long int var_16 = 5497855273829144338ULL;
int zero = 0;
unsigned int var_19 = 3278185153U;
unsigned short var_20 = (unsigned short)48070;
unsigned long long int var_21 = 4053119885076130410ULL;
unsigned int var_22 = 813712541U;
unsigned int arr_1 [23] [23] ;
unsigned int arr_2 [23] ;
unsigned short arr_3 [23] ;
unsigned short arr_4 [23] ;
unsigned short arr_5 [23] ;
unsigned int arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 2894797502U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 484527748U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)59553;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned short)26902;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)39354 : (unsigned short)18049;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 722053358U : 2961631955U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
