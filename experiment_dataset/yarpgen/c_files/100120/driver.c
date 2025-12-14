#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-16960;
unsigned long long int var_5 = 17166978895782781097ULL;
short var_7 = (short)28739;
long long int var_9 = -5290425129405550010LL;
unsigned short var_10 = (unsigned short)38381;
int zero = 0;
signed char var_13 = (signed char)74;
unsigned int var_14 = 520244710U;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)30;
long long int var_17 = 3616787736228362375LL;
unsigned int arr_3 [16] ;
short arr_2 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 2420013998U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-21971;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
