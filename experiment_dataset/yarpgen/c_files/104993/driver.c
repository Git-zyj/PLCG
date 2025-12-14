#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 13485324192260899432ULL;
short var_3 = (short)3678;
long long int var_4 = 4415544050295175581LL;
long long int var_5 = 7789317289533709510LL;
unsigned short var_8 = (unsigned short)60926;
unsigned short var_10 = (unsigned short)3863;
int var_12 = -235203251;
int var_13 = 2143778686;
short var_14 = (short)13487;
long long int var_15 = -3272626902865274182LL;
int zero = 0;
int var_16 = 1093264939;
int var_17 = 1023485121;
unsigned short var_18 = (unsigned short)7669;
unsigned long long int var_19 = 17404598552193749125ULL;
unsigned short var_20 = (unsigned short)61096;
long long int var_21 = 7994736591211002413LL;
unsigned long long int var_22 = 18421659588946852539ULL;
int var_23 = -1151487761;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)25339;
int arr_0 [25] ;
_Bool arr_3 [25] [25] ;
int arr_7 [25] ;
long long int arr_2 [25] ;
long long int arr_12 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -63843430;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2093041431 : -1686311541;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -1841660556026127980LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_12 [i_0] [i_1] = -1871338927864462016LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
