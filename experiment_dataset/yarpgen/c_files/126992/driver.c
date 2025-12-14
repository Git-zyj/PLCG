#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 496274737;
_Bool var_2 = (_Bool)0;
_Bool var_7 = (_Bool)1;
unsigned char var_10 = (unsigned char)250;
_Bool var_13 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-101;
_Bool var_17 = (_Bool)1;
int var_18 = -271785316;
unsigned char var_19 = (unsigned char)41;
unsigned char var_20 = (unsigned char)205;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)235;
long long int var_23 = -4789835524932170929LL;
_Bool arr_0 [25] ;
int arr_2 [25] [25] [25] ;
unsigned char arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1831006901;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)231;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
