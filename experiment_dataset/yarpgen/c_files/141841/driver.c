#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28054;
unsigned char var_5 = (unsigned char)31;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)54330;
unsigned long long int var_15 = 14769884404073822028ULL;
unsigned int var_16 = 3095821888U;
int zero = 0;
unsigned int var_17 = 3743533488U;
unsigned int var_18 = 1376887063U;
unsigned long long int var_19 = 9672714110222318034ULL;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
unsigned short arr_2 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)21474;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
