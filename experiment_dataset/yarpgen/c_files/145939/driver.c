#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1518889773;
signed char var_7 = (signed char)18;
long long int var_8 = -1990856550614927316LL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 16326640332832964185ULL;
int zero = 0;
signed char var_14 = (signed char)-97;
signed char var_15 = (signed char)17;
long long int var_16 = 6522872170580724919LL;
unsigned char var_17 = (unsigned char)188;
int var_18 = -799562782;
long long int var_19 = 7652289173726655591LL;
unsigned char var_20 = (unsigned char)30;
signed char var_21 = (signed char)9;
signed char var_22 = (signed char)-55;
unsigned char var_23 = (unsigned char)191;
int arr_0 [25] [25] ;
unsigned int arr_1 [25] ;
_Bool arr_3 [10] ;
signed char arr_2 [25] [25] ;
int arr_15 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 528488664;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 1491517323U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_15 [i_0] = -1584027020;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
