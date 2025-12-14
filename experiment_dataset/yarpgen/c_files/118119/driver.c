#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1842851263848854610LL;
unsigned short var_4 = (unsigned short)10388;
long long int var_5 = -319849873932294673LL;
long long int var_6 = -4649929088951020001LL;
long long int var_10 = 4810377289420509198LL;
long long int var_13 = 6435271112483393410LL;
int zero = 0;
long long int var_15 = 8567082120674696712LL;
signed char var_16 = (signed char)3;
long long int var_17 = -8277960467409449203LL;
long long int var_18 = 6048787353072895246LL;
long long int var_19 = 4836358147564569582LL;
signed char var_20 = (signed char)-92;
long long int var_21 = 3972847398071871063LL;
int var_22 = -217573256;
short arr_0 [18] ;
unsigned long long int arr_2 [18] ;
unsigned long long int arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)5651;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 1853974475474475146ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 3164673899747153218ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
