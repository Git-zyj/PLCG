#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)42;
unsigned char var_3 = (unsigned char)201;
unsigned int var_4 = 3243921556U;
unsigned char var_7 = (unsigned char)244;
long long int var_10 = 2790133060980191775LL;
unsigned char var_11 = (unsigned char)195;
_Bool var_12 = (_Bool)0;
long long int var_13 = -3546864462857991307LL;
int zero = 0;
unsigned int var_14 = 3912962325U;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)12;
unsigned int var_17 = 3833729837U;
unsigned char var_18 = (unsigned char)60;
_Bool var_19 = (_Bool)0;
long long int var_20 = -1676552378899254981LL;
_Bool arr_1 [23] ;
unsigned char arr_2 [23] [23] ;
_Bool arr_3 [23] [23] [23] ;
unsigned long long int arr_8 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)5 : (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = 9932587137106978360ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
