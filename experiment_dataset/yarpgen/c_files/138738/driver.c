#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -928621967944861612LL;
short var_3 = (short)-14887;
_Bool var_4 = (_Bool)0;
long long int var_5 = -1311766939151909119LL;
unsigned char var_6 = (unsigned char)87;
unsigned long long int var_7 = 1843584660424251627ULL;
unsigned int var_8 = 2004505721U;
int var_11 = 1054826806;
unsigned char var_13 = (unsigned char)60;
unsigned long long int var_14 = 15563888768014106456ULL;
unsigned char var_15 = (unsigned char)3;
long long int var_17 = 2556308246192665655LL;
unsigned long long int var_19 = 12543401291327775ULL;
int zero = 0;
int var_20 = -1339720012;
unsigned char var_21 = (unsigned char)111;
unsigned long long int var_22 = 3158541665556285890ULL;
unsigned char var_23 = (unsigned char)101;
int var_24 = -1242593467;
long long int var_25 = 3298223796835034899LL;
unsigned long long int var_26 = 11337620354496868376ULL;
long long int var_27 = -32967014741190192LL;
unsigned long long int var_28 = 10284155745749931104ULL;
unsigned long long int var_29 = 17241309082802088064ULL;
unsigned long long int var_30 = 18293565041016442227ULL;
unsigned long long int arr_0 [23] ;
unsigned int arr_1 [23] ;
long long int arr_2 [23] ;
unsigned char arr_3 [23] ;
int arr_5 [23] [23] ;
unsigned int arr_6 [23] [23] [23] ;
short arr_8 [22] ;
unsigned char arr_11 [12] ;
int arr_12 [12] [12] ;
unsigned int arr_13 [12] ;
unsigned long long int arr_7 [23] ;
int arr_10 [22] ;
int arr_14 [12] [12] ;
long long int arr_15 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 2435353062051338563ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 3297081643U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -7587198745792358778LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 183351358;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1529259690U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (short)-11624;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_12 [i_0] [i_1] = 1430362669;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = 2058811771U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 1003271618247621094ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = -636124299;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_14 [i_0] [i_1] = 680310692;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = 2036857723047955020LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
