#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1155069238U;
unsigned int var_3 = 586062177U;
unsigned char var_4 = (unsigned char)102;
unsigned int var_6 = 2666981459U;
unsigned int var_9 = 118181220U;
unsigned int var_12 = 311658174U;
unsigned long long int var_13 = 11361357172760876993ULL;
unsigned long long int var_15 = 8269347553266585089ULL;
int zero = 0;
unsigned int var_17 = 1566623118U;
unsigned char var_18 = (unsigned char)0;
unsigned long long int var_19 = 18054009318492375755ULL;
unsigned int var_20 = 1996224126U;
unsigned int var_21 = 3717193020U;
unsigned int var_22 = 2183847863U;
long long int arr_10 [16] ;
unsigned char arr_2 [19] ;
unsigned int arr_13 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 934506885427303449LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 1475745143U : 2474818777U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
