#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 593402583U;
unsigned char var_2 = (unsigned char)87;
unsigned int var_3 = 2832861604U;
unsigned long long int var_4 = 288873765774871253ULL;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 4271274409U;
signed char var_9 = (signed char)-65;
unsigned int var_12 = 482575785U;
long long int var_14 = -2476997838243283695LL;
unsigned int var_15 = 2139855855U;
unsigned char var_17 = (unsigned char)121;
unsigned short var_18 = (unsigned short)51836;
int var_19 = -1545187699;
int zero = 0;
int var_20 = -1502242142;
unsigned int var_21 = 2162112735U;
_Bool arr_2 [23] ;
unsigned int arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 130383086U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
