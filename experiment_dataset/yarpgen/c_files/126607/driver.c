#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)70;
long long int var_7 = -3051001789786099700LL;
int var_9 = -407112306;
short var_11 = (short)32755;
short var_13 = (short)-32396;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -2610761554345917069LL;
short var_16 = (short)-31175;
int arr_3 [24] ;
signed char arr_6 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = -581588829;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)71;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
