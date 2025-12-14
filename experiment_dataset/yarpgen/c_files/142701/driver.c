#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15930;
signed char var_1 = (signed char)-62;
unsigned int var_2 = 4006714086U;
unsigned int var_3 = 3995382493U;
short var_4 = (short)29064;
unsigned short var_5 = (unsigned short)38461;
int var_6 = 1042382254;
signed char var_7 = (signed char)91;
short var_8 = (short)5602;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)57;
int zero = 0;
signed char var_12 = (signed char)62;
unsigned char var_13 = (unsigned char)162;
unsigned short var_14 = (unsigned short)44759;
signed char var_15 = (signed char)64;
unsigned int var_16 = 1644103069U;
long long int var_17 = 5430001384286516408LL;
signed char var_18 = (signed char)-47;
int var_19 = -118636607;
short var_20 = (short)22069;
unsigned long long int arr_1 [16] ;
unsigned short arr_5 [16] [16] ;
_Bool arr_11 [19] ;
signed char arr_13 [19] [19] ;
_Bool arr_14 [19] ;
_Bool arr_17 [10] ;
signed char arr_4 [16] [16] ;
int arr_18 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 27415486560910432ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)63967 : (unsigned short)4209;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)75 : (signed char)65;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)82;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = 1016957767;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
