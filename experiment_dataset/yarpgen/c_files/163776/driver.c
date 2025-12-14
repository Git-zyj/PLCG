#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-28946;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)8;
signed char var_7 = (signed char)-34;
unsigned char var_8 = (unsigned char)121;
long long int var_11 = -8818458403756585099LL;
int zero = 0;
long long int var_16 = 301261871991175681LL;
_Bool var_17 = (_Bool)0;
long long int var_18 = -1327357727573378052LL;
unsigned short var_19 = (unsigned short)40663;
unsigned int var_20 = 1201109787U;
unsigned short arr_0 [23] [23] ;
long long int arr_2 [23] ;
unsigned char arr_3 [23] [23] [23] ;
long long int arr_5 [23] [23] [23] ;
unsigned long long int arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)31407;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 7888534207212831303LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 7298217512080947539LL : -4023438366686283567LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1922433281580472529ULL : 13910022295951684458ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
