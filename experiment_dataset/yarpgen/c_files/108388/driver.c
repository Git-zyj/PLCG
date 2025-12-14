#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3416931781U;
int var_4 = -31063579;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-55;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)-94;
signed char var_17 = (signed char)71;
long long int arr_0 [25] [25] ;
unsigned long long int arr_1 [25] ;
int arr_3 [25] [25] ;
int arr_4 [25] ;
int arr_6 [25] ;
unsigned char arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = -539485897392221783LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 848128584470671772ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 312995950;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = -901565634;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = -355301877;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (unsigned char)147;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
