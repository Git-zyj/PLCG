#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6306474279347270147LL;
long long int var_2 = -3383265091429875774LL;
long long int var_7 = 720570923903712700LL;
_Bool var_8 = (_Bool)1;
long long int var_9 = 8452977888176871717LL;
long long int var_12 = 9178227271343339714LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2740745751U;
long long int var_17 = 7710820208153898787LL;
long long int arr_0 [10] [10] ;
short arr_2 [10] ;
short arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 7887402173885335263LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)-25295;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (short)26546;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
