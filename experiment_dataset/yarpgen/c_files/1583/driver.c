#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2209384946U;
unsigned int var_3 = 2963946557U;
unsigned short var_4 = (unsigned short)10187;
unsigned long long int var_5 = 3728234696319986522ULL;
int var_11 = -729231528;
unsigned long long int var_13 = 5247245760075163504ULL;
unsigned long long int var_14 = 16213833224607542727ULL;
int zero = 0;
unsigned long long int var_15 = 12808626433608713020ULL;
unsigned short var_16 = (unsigned short)17014;
unsigned int var_17 = 3900339099U;
unsigned int arr_0 [19] ;
int arr_1 [19] ;
unsigned short arr_2 [19] ;
int arr_3 [19] [19] [19] ;
unsigned int arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 1581227842U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 971001619;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)40125;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 539082236;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 207026614U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
