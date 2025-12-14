#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1052311650U;
long long int var_2 = 1773455021974577847LL;
long long int var_3 = -6216233226475035349LL;
long long int var_5 = -4848015435898872134LL;
_Bool var_6 = (_Bool)1;
int var_10 = -94502279;
unsigned char var_11 = (unsigned char)1;
_Bool var_13 = (_Bool)1;
long long int var_15 = 6227056978083403103LL;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 1239486928U;
unsigned long long int var_20 = 2089574577327429114ULL;
unsigned short var_21 = (unsigned short)21459;
int var_22 = 1633543144;
long long int var_23 = -4765990804288768496LL;
long long int var_24 = -2743630953000001604LL;
long long int var_25 = 2064151776372676223LL;
short arr_1 [16] ;
unsigned long long int arr_2 [16] ;
int arr_5 [15] ;
int arr_7 [15] [15] ;
unsigned char arr_8 [15] ;
unsigned short arr_9 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)-14393;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 14300554357509209331ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 1753949073;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = 1946505494;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (unsigned short)36771;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
