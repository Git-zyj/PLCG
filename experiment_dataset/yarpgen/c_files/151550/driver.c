#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4228051908U;
long long int var_3 = 3222513484737686168LL;
short var_6 = (short)6908;
int var_7 = -556007802;
short var_8 = (short)27672;
int zero = 0;
unsigned short var_15 = (unsigned short)1713;
short var_16 = (short)22948;
unsigned short var_17 = (unsigned short)44816;
unsigned char var_18 = (unsigned char)106;
unsigned int arr_1 [15] [15] ;
_Bool arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 1997785615U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
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
