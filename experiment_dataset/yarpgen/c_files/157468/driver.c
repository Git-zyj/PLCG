#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2376644958U;
unsigned long long int var_1 = 4711658074703701207ULL;
unsigned int var_2 = 1579339294U;
unsigned int var_3 = 805594007U;
unsigned long long int var_6 = 12579602081731743512ULL;
unsigned int var_8 = 228739003U;
long long int var_10 = 2703407206036014219LL;
unsigned int var_13 = 798014111U;
int zero = 0;
long long int var_14 = 3325907428804491402LL;
unsigned char var_15 = (unsigned char)244;
unsigned long long int var_16 = 12519347005455389713ULL;
unsigned int var_17 = 2285015351U;
unsigned int arr_0 [18] ;
unsigned long long int arr_1 [18] ;
int arr_2 [18] [18] ;
unsigned char arr_3 [18] [18] ;
unsigned int arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 1803483479U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 11443445107991968962ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 911510120;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)70;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 3345388578U : 3185606105U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
