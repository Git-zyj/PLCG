#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_5 = (short)-2923;
_Bool var_6 = (_Bool)0;
long long int var_8 = -3176746031363351703LL;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)41225;
int zero = 0;
long long int var_12 = -992698436590986558LL;
int var_13 = 1862753793;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 17792919412946829689ULL;
signed char arr_2 [21] ;
unsigned char arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-110 : (signed char)-35;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned char)29;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
