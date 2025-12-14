#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1696;
_Bool var_4 = (_Bool)0;
unsigned short var_8 = (unsigned short)60438;
_Bool var_9 = (_Bool)0;
int var_14 = 1600611317;
unsigned int var_15 = 1062249266U;
unsigned long long int var_17 = 10600955125406395688ULL;
int var_19 = 535613139;
int zero = 0;
unsigned char var_20 = (unsigned char)63;
int var_21 = -1856373749;
unsigned short var_22 = (unsigned short)46490;
unsigned long long int arr_0 [14] ;
unsigned long long int arr_1 [14] ;
unsigned short arr_2 [14] ;
_Bool arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 5132741054462952648ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 1963749380092425246ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)44687;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
