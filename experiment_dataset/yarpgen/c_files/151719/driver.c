#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 12652661962271628130ULL;
unsigned int var_4 = 3803912518U;
unsigned char var_5 = (unsigned char)111;
unsigned short var_6 = (unsigned short)29510;
unsigned short var_7 = (unsigned short)45423;
short var_9 = (short)-25248;
signed char var_11 = (signed char)72;
int zero = 0;
int var_14 = -1536356308;
unsigned long long int var_15 = 17577817858336604249ULL;
unsigned char var_16 = (unsigned char)168;
unsigned short var_17 = (unsigned short)37241;
short var_18 = (short)-3266;
unsigned int arr_0 [12] ;
_Bool arr_1 [12] ;
unsigned short arr_2 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1716272795U : 1934177015U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)38201 : (unsigned short)60514;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
