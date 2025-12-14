#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1069170881U;
unsigned int var_5 = 2953682400U;
unsigned long long int var_8 = 14084859544456747281ULL;
unsigned int var_12 = 375739316U;
int zero = 0;
unsigned int var_13 = 1140801615U;
unsigned long long int var_14 = 1050047144405735072ULL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 4128558649628148286ULL;
unsigned long long int arr_0 [11] ;
signed char arr_1 [11] [11] ;
signed char arr_2 [11] ;
unsigned int arr_4 [11] ;
unsigned long long int arr_5 [11] ;
long long int arr_6 [11] ;
long long int arr_7 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 17161193210254624128ULL : 12619633791771491568ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-117;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1194325122U : 1249254705U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 1650223036570596729ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -8686592872219281407LL : -3454781319078911560LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -6821707286085162525LL : -3910772543385389074LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
