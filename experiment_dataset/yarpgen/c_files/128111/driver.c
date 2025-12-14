#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)182;
short var_2 = (short)21023;
unsigned long long int var_3 = 14748129652327254028ULL;
unsigned short var_4 = (unsigned short)19529;
int var_5 = 1084985930;
long long int var_8 = 2389210865687620662LL;
unsigned int var_9 = 3027738559U;
signed char var_12 = (signed char)59;
unsigned long long int var_13 = 9191028101348865891ULL;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)127;
int zero = 0;
unsigned char var_17 = (unsigned char)176;
signed char var_18 = (signed char)84;
unsigned long long int var_19 = 6613856829094680870ULL;
unsigned int var_20 = 1895614222U;
int arr_8 [16] [16] ;
unsigned long long int arr_11 [21] ;
_Bool arr_12 [21] ;
signed char arr_17 [10] ;
_Bool arr_18 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? -447712269 : -37580592;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = 16244995209809904670ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (signed char)78 : (signed char)-43;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_17 [i_0] );
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
