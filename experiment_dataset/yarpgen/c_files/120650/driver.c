#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6956271737087916512LL;
unsigned char var_1 = (unsigned char)204;
unsigned char var_2 = (unsigned char)212;
unsigned short var_8 = (unsigned short)41191;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)31624;
unsigned int var_14 = 2114800081U;
long long int var_18 = -6252689895622922960LL;
int zero = 0;
long long int var_19 = 7019642268884521957LL;
long long int var_20 = 1881283708544786762LL;
long long int var_21 = 3397676309692196546LL;
short var_22 = (short)-24533;
unsigned int var_23 = 3123139532U;
long long int arr_1 [11] ;
unsigned short arr_2 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -6632294550263726949LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)21180 : (unsigned short)26279;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
