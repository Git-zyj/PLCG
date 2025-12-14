#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1498820624U;
long long int var_4 = 2021657302845761690LL;
unsigned long long int var_5 = 9179352364175953743ULL;
unsigned int var_9 = 2517234396U;
unsigned short var_12 = (unsigned short)45184;
int zero = 0;
unsigned char var_13 = (unsigned char)239;
unsigned char var_14 = (unsigned char)90;
unsigned int var_15 = 1569756655U;
unsigned char arr_0 [17] [17] ;
unsigned long long int arr_2 [17] ;
unsigned int arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 10230138561923969283ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 1193409310U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
