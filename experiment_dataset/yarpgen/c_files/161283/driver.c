#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)128;
unsigned int var_1 = 2334230837U;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned short var_13 = (unsigned short)9734;
int zero = 0;
unsigned long long int var_18 = 10524142843312027744ULL;
int var_19 = -238052296;
unsigned short var_20 = (unsigned short)16475;
long long int arr_0 [16] ;
unsigned short arr_2 [16] ;
unsigned short arr_3 [16] ;
_Bool arr_4 [16] ;
long long int arr_5 [16] [16] [16] ;
unsigned long long int arr_7 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 4967849490943937338LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned short)11610;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned short)15956;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -921718590418458474LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = 8456176005537122150ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
