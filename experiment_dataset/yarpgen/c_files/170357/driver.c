#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 277513232148463765LL;
unsigned int var_4 = 3068250211U;
unsigned long long int var_5 = 17649901820258637817ULL;
unsigned long long int var_7 = 2174346317513516336ULL;
unsigned long long int var_9 = 2350283502293801199ULL;
int zero = 0;
unsigned int var_11 = 1745970U;
long long int var_12 = -934341437883780635LL;
short var_13 = (short)16001;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 14876334616229413278ULL;
unsigned short var_16 = (unsigned short)19225;
unsigned char var_17 = (unsigned char)91;
unsigned int var_18 = 2801327166U;
unsigned short var_19 = (unsigned short)871;
unsigned long long int var_20 = 17510319029788932898ULL;
unsigned int var_21 = 4264824191U;
unsigned int arr_0 [24] [24] ;
unsigned short arr_3 [24] ;
unsigned char arr_4 [24] [24] ;
unsigned int arr_7 [24] [24] [24] ;
unsigned char arr_2 [24] ;
unsigned short arr_11 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 210138149U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)6417;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 432597180U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)61298;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
