#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22429;
int var_1 = 510900468;
signed char var_3 = (signed char)49;
unsigned long long int var_7 = 3054329147734319440ULL;
unsigned short var_9 = (unsigned short)53584;
int zero = 0;
signed char var_11 = (signed char)-53;
unsigned long long int var_12 = 5983972712770314609ULL;
unsigned char var_13 = (unsigned char)85;
int var_14 = 1394073038;
unsigned short var_15 = (unsigned short)57643;
int var_16 = -841660811;
unsigned int var_17 = 3812011279U;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)10090;
int var_20 = 742366085;
unsigned char var_21 = (unsigned char)24;
_Bool arr_0 [15] ;
unsigned short arr_1 [15] ;
unsigned int arr_2 [15] [15] ;
short arr_7 [24] ;
int arr_3 [15] ;
int arr_4 [15] ;
unsigned short arr_8 [24] ;
long long int arr_13 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)32725;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 453999200U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (short)-29505;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = -1940440695;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -584340980;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (unsigned short)25038;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1104228031394149200LL : -2066976300032466510LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
