#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8817021550313314971LL;
unsigned char var_1 = (unsigned char)147;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 2519529874258490487ULL;
unsigned short var_10 = (unsigned short)44276;
unsigned short var_11 = (unsigned short)50749;
unsigned int var_12 = 1876421179U;
unsigned short var_14 = (unsigned short)21133;
short var_16 = (short)-31809;
int zero = 0;
long long int var_18 = 6691675204966754564LL;
int var_19 = -1653852748;
signed char var_20 = (signed char)-9;
unsigned long long int var_21 = 11163261976257045465ULL;
unsigned short var_22 = (unsigned short)60862;
_Bool var_23 = (_Bool)1;
int var_24 = -681064603;
unsigned int var_25 = 1030792844U;
_Bool var_26 = (_Bool)0;
long long int arr_0 [21] [21] ;
unsigned short arr_1 [21] ;
signed char arr_2 [22] ;
short arr_3 [22] ;
short arr_4 [22] [22] ;
unsigned int arr_7 [11] ;
short arr_8 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = -4397831464115665921LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)25489;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (short)-30109;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (short)8914;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 1579576197U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-16143;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
