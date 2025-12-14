#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -6387868;
unsigned int var_5 = 1321654920U;
unsigned int var_9 = 2206997298U;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)11749;
short var_12 = (short)-22932;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)24921;
int zero = 0;
long long int var_17 = -6405833608366282783LL;
unsigned char var_18 = (unsigned char)191;
unsigned short var_19 = (unsigned short)13873;
int var_20 = 407813417;
unsigned short var_21 = (unsigned short)60464;
int var_22 = -1852397949;
unsigned int var_23 = 852941968U;
int var_24 = -423481924;
unsigned short var_25 = (unsigned short)33113;
signed char arr_4 [23] [23] ;
long long int arr_5 [23] ;
short arr_12 [24] [24] ;
long long int arr_13 [24] ;
long long int arr_15 [12] [12] ;
signed char arr_10 [23] [23] [23] ;
long long int arr_11 [23] ;
unsigned int arr_16 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-60;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = -4749095830457447523LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = (short)28077;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = 4923052527834440874LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_15 [i_0] [i_1] = 5534795598093653578LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-3 : (signed char)-1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = -1531611557451250805LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = 792307344U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
