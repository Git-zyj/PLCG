#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10027;
unsigned char var_1 = (unsigned char)167;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)37;
signed char var_4 = (signed char)-44;
long long int var_5 = 6366638367694374279LL;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-59;
signed char var_8 = (signed char)-84;
unsigned int var_9 = 2003071660U;
unsigned int var_10 = 888871087U;
unsigned int var_11 = 3289975395U;
int zero = 0;
unsigned short var_12 = (unsigned short)13024;
unsigned char var_13 = (unsigned char)252;
short var_14 = (short)-16545;
int var_15 = 1703084173;
unsigned char var_16 = (unsigned char)164;
long long int var_17 = -6467734343850479445LL;
long long int var_18 = 3456539064429263923LL;
int var_19 = 1308904182;
long long int var_20 = -6027713840163829011LL;
long long int var_21 = -3248846989543674548LL;
unsigned long long int var_22 = 5817856177297815345ULL;
long long int var_23 = -5501958962562423921LL;
signed char var_24 = (signed char)72;
_Bool arr_0 [21] ;
long long int arr_1 [21] ;
int arr_2 [21] ;
signed char arr_3 [21] [21] ;
_Bool arr_4 [21] ;
short arr_7 [21] [21] [21] ;
int arr_10 [21] [21] [21] ;
unsigned int arr_11 [21] [21] ;
unsigned int arr_13 [21] ;
unsigned char arr_5 [21] [21] ;
unsigned short arr_9 [21] [21] [21] ;
int arr_14 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -6552643558618101043LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -2031364881;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)16;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)2603;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 1428564487;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = 3545812920U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = 1939380122U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)61132;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = -630890101;
}

void checksum() {
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
