#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)50813;
unsigned short var_4 = (unsigned short)22743;
long long int var_6 = -2764890475024432180LL;
unsigned long long int var_7 = 13520096062115510277ULL;
unsigned int var_9 = 3710504181U;
unsigned int var_15 = 1078110689U;
unsigned long long int var_16 = 8271936634364813622ULL;
unsigned short var_17 = (unsigned short)24236;
int zero = 0;
unsigned char var_20 = (unsigned char)73;
long long int var_21 = -6844134092036472147LL;
short var_22 = (short)12328;
unsigned int var_23 = 3308277116U;
long long int var_24 = -9036486047102053433LL;
unsigned char var_25 = (unsigned char)214;
signed char var_26 = (signed char)22;
unsigned char arr_2 [16] ;
unsigned long long int arr_3 [16] ;
signed char arr_4 [16] ;
unsigned char arr_5 [16] ;
long long int arr_14 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 15107968300919852360ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (signed char)90;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 8637989350999971202LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
