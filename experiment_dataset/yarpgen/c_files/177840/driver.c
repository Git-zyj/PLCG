#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned char var_9 = (unsigned char)182;
int var_11 = 1208324232;
_Bool var_15 = (_Bool)0;
int var_16 = -1559011253;
_Bool var_17 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2347254763U;
int var_22 = -1157814786;
_Bool var_23 = (_Bool)1;
int var_24 = 1628723241;
int arr_0 [11] [11] ;
int arr_1 [11] ;
int arr_2 [11] ;
int arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 1089888995;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 389371998;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -1352301142;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = -459937583;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
