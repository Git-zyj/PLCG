#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-6540;
unsigned short var_9 = (unsigned short)73;
unsigned int var_10 = 1109245398U;
short var_14 = (short)14522;
long long int var_15 = -9214908866781879969LL;
unsigned short var_16 = (unsigned short)36549;
long long int var_17 = 914069572104456167LL;
int zero = 0;
unsigned long long int var_18 = 2245110940684075767ULL;
unsigned short var_19 = (unsigned short)47056;
unsigned short var_20 = (unsigned short)46374;
unsigned int var_21 = 3068346206U;
_Bool arr_0 [15] ;
unsigned int arr_1 [15] [15] ;
short arr_3 [15] ;
_Bool arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 3382882157U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)11135;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
