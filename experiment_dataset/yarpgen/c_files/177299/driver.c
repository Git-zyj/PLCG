#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17394698903622271082ULL;
unsigned long long int var_2 = 1012234566991020876ULL;
unsigned int var_3 = 3714532893U;
long long int var_4 = 1858727669660797648LL;
unsigned char var_7 = (unsigned char)18;
short var_8 = (short)-12719;
unsigned long long int var_11 = 4318642730728038911ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)24729;
unsigned int var_15 = 473980165U;
_Bool var_16 = (_Bool)0;
long long int var_17 = -9190892367836786814LL;
unsigned long long int arr_3 [16] ;
unsigned int arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 11376081927539573491ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 2927586798U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
