#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)3624;
signed char var_2 = (signed char)92;
int var_3 = 183643992;
unsigned long long int var_4 = 2374525991339658642ULL;
unsigned short var_5 = (unsigned short)8993;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)220;
_Bool var_8 = (_Bool)0;
long long int var_9 = 5953690683789930461LL;
unsigned int var_10 = 850827599U;
int zero = 0;
long long int var_11 = 8516813957833261065LL;
unsigned long long int var_12 = 2268447673227729387ULL;
int var_13 = 683252050;
unsigned int var_14 = 1470505370U;
unsigned short var_15 = (unsigned short)56929;
_Bool var_16 = (_Bool)1;
short var_17 = (short)4205;
short var_18 = (short)-30819;
int var_19 = 3987215;
signed char var_20 = (signed char)-30;
unsigned long long int var_21 = 2193422305260201241ULL;
signed char var_22 = (signed char)79;
unsigned long long int var_23 = 6028674204016976727ULL;
long long int var_24 = -1560083981564095255LL;
long long int var_25 = 39932471396841151LL;
unsigned int var_26 = 1743060065U;
short var_27 = (short)-21956;
int var_28 = -1007323071;
unsigned char arr_1 [14] ;
unsigned short arr_6 [24] [24] ;
long long int arr_7 [24] [24] ;
short arr_17 [16] ;
_Bool arr_20 [16] ;
short arr_28 [16] [16] [16] [16] [16] [16] ;
int arr_2 [14] [14] ;
signed char arr_18 [16] ;
short arr_19 [16] [16] ;
short arr_25 [16] ;
_Bool arr_33 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)30146;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = 4585210161615948478LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = (short)-3688;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)15112;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 1460529989;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_19 [i_0] [i_1] = (short)25;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (short)-24945 : (short)-25355;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_33 [i_0] = (_Bool)0;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_33 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
