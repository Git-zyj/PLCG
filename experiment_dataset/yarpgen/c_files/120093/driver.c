#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2577081493U;
short var_4 = (short)12237;
short var_5 = (short)-31868;
unsigned int var_6 = 303000645U;
signed char var_9 = (signed char)45;
unsigned long long int var_10 = 4704787819740064782ULL;
int var_13 = 1280925897;
int zero = 0;
unsigned char var_14 = (unsigned char)141;
unsigned int var_15 = 1904744459U;
unsigned short var_16 = (unsigned short)43817;
unsigned int var_17 = 1661045400U;
short var_18 = (short)10485;
short var_19 = (short)27285;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)11;
unsigned long long int var_22 = 11661052318506418392ULL;
unsigned short var_23 = (unsigned short)49516;
unsigned int var_24 = 791512619U;
signed char arr_1 [19] ;
signed char arr_2 [19] ;
unsigned char arr_6 [19] [19] [19] [19] ;
unsigned long long int arr_8 [19] ;
unsigned char arr_9 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 17474739464858515711ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)109;
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
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
