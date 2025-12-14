#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8315031817827759247LL;
short var_2 = (short)27526;
signed char var_3 = (signed char)113;
unsigned char var_4 = (unsigned char)101;
short var_8 = (short)-2764;
signed char var_10 = (signed char)-85;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 9790399616521629259ULL;
long long int var_17 = 2698559175038120755LL;
unsigned long long int var_18 = 15878945034179315346ULL;
long long int var_19 = 3714499382622571054LL;
signed char var_20 = (signed char)-86;
long long int arr_0 [10] [10] ;
long long int arr_3 [10] [10] ;
unsigned int arr_5 [10] [10] ;
unsigned int arr_2 [10] [10] ;
int arr_10 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 3949358179096882218LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 1987028797952109235LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = 2636933093U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 3425811763U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = -436365518;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
