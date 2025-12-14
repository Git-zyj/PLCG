#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10496820678259667008ULL;
unsigned long long int var_1 = 8923265116584121928ULL;
unsigned long long int var_3 = 4817785810505693706ULL;
unsigned long long int var_5 = 15726500552860403018ULL;
unsigned long long int var_8 = 685271654094546256ULL;
unsigned long long int var_9 = 2554785085728554587ULL;
unsigned long long int var_12 = 3844619137287756767ULL;
int zero = 0;
unsigned long long int var_13 = 6846802515441309116ULL;
unsigned long long int var_14 = 4279687333771972405ULL;
unsigned long long int var_15 = 16967455907925921481ULL;
unsigned long long int var_16 = 14616825952586561702ULL;
unsigned long long int arr_0 [15] [15] ;
unsigned long long int arr_1 [15] [15] ;
unsigned long long int arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 416958350375098565ULL : 17590026011734331129ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 12827062789750322728ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1979273716188396277ULL : 13063102529696915376ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
