#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = 6913618031804166132LL;
signed char var_13 = (signed char)-80;
short var_14 = (short)9689;
unsigned char var_15 = (unsigned char)189;
int zero = 0;
long long int var_18 = -7856519019918695636LL;
unsigned char var_19 = (unsigned char)222;
short var_20 = (short)28934;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 17677012895805797853ULL;
unsigned long long int var_23 = 5683728587040050218ULL;
short arr_0 [11] ;
long long int arr_1 [11] ;
unsigned char arr_2 [11] ;
unsigned int arr_3 [11] [11] ;
unsigned long long int arr_5 [12] [12] ;
unsigned char arr_7 [12] ;
int arr_8 [12] [12] ;
int arr_4 [11] [11] ;
short arr_9 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)16320 : (short)-5646;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 7673211871846508671LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)112 : (unsigned char)228;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 576047532U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = 12170593051437854333ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 475227168 : 326028353;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -912155872 : 1153858630;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)-5226 : (short)-22399;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
