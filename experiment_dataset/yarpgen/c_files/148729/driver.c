#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 324047061;
unsigned int var_1 = 3960990063U;
long long int var_3 = 8653662503511704742LL;
_Bool var_4 = (_Bool)0;
long long int var_8 = 4099536744320191LL;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)127;
long long int var_12 = 8413735965325008812LL;
int var_13 = 1272128058;
int zero = 0;
unsigned char var_14 = (unsigned char)200;
unsigned int var_15 = 2822237874U;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)21;
unsigned int var_18 = 957240529U;
signed char arr_0 [15] ;
_Bool arr_1 [15] ;
unsigned short arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)49553 : (unsigned short)37253;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
