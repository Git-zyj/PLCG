#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5005;
unsigned long long int var_6 = 15946502619872937209ULL;
unsigned int var_12 = 503119714U;
unsigned short var_13 = (unsigned short)1028;
short var_15 = (short)1477;
int zero = 0;
unsigned long long int var_17 = 12587600483407323363ULL;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 887322145U;
short var_20 = (short)5144;
int var_21 = -422976254;
long long int var_22 = -4526287733659030088LL;
short arr_0 [12] [12] ;
unsigned long long int arr_1 [12] ;
long long int arr_2 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-1966;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 7379772060410770339ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 3922900161278932432LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
