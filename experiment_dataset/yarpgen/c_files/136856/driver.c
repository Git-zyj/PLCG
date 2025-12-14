#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)19;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_16 = -7588951268300811482LL;
long long int arr_0 [16] [16] ;
unsigned char arr_1 [16] ;
unsigned char arr_2 [16] ;
int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = -5694865049394502028LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 924147011;
}

void checksum() {
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
