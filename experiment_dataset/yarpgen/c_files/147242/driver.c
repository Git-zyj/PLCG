#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)19493;
long long int var_6 = -7791792197449476282LL;
unsigned short var_10 = (unsigned short)51924;
unsigned int var_11 = 2653469209U;
unsigned long long int var_12 = 6441883118433498223ULL;
unsigned int var_15 = 992480351U;
unsigned char var_16 = (unsigned char)11;
int zero = 0;
unsigned char var_19 = (unsigned char)178;
unsigned long long int var_20 = 16212016117443228353ULL;
unsigned char var_21 = (unsigned char)168;
long long int var_22 = 69325187080305871LL;
unsigned short var_23 = (unsigned short)16881;
long long int arr_0 [18] [18] ;
unsigned int arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 4678832266618900789LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 2080957682U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
