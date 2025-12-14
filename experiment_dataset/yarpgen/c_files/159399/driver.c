#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3551363267U;
long long int var_1 = 2444390608086378588LL;
long long int var_5 = -7498045656907450215LL;
short var_8 = (short)-22362;
unsigned short var_9 = (unsigned short)24799;
int zero = 0;
unsigned short var_10 = (unsigned short)47145;
int var_11 = 386711946;
unsigned char var_12 = (unsigned char)18;
int var_13 = 426196935;
unsigned short var_14 = (unsigned short)25019;
unsigned char var_15 = (unsigned char)15;
long long int var_16 = 5823128384381164939LL;
unsigned long long int arr_0 [21] ;
unsigned char arr_1 [21] ;
int arr_4 [21] [21] [21] ;
unsigned short arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 7853764805656989475ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)202;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1709858235 : 790190022;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)3833 : (unsigned short)63694;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
