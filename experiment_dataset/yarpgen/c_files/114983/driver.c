#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1659890457373084422ULL;
unsigned int var_3 = 2435610160U;
unsigned char var_4 = (unsigned char)17;
unsigned char var_6 = (unsigned char)35;
unsigned char var_7 = (unsigned char)132;
signed char var_8 = (signed char)17;
long long int var_9 = 6951153359344867302LL;
unsigned int var_10 = 2707238103U;
signed char var_12 = (signed char)-48;
int zero = 0;
unsigned char var_13 = (unsigned char)74;
_Bool var_14 = (_Bool)0;
short var_15 = (short)30001;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
unsigned long long int arr_0 [23] ;
unsigned int arr_1 [23] [23] ;
unsigned short arr_2 [23] [23] ;
short arr_4 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 1195956462359545461ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 1708832000U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)17509;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (short)24503;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
