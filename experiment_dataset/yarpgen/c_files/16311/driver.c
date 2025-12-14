#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14533889649803655578ULL;
long long int var_10 = -3635442217733610838LL;
unsigned short var_11 = (unsigned short)49956;
unsigned char var_12 = (unsigned char)74;
unsigned short var_16 = (unsigned short)39536;
int zero = 0;
unsigned short var_18 = (unsigned short)55961;
unsigned char var_19 = (unsigned char)64;
short var_20 = (short)-18973;
unsigned int var_21 = 1685426042U;
int var_22 = 1908652140;
long long int var_23 = -5750918859472569745LL;
unsigned long long int var_24 = 8060625207951823234ULL;
unsigned short arr_2 [20] [20] [20] ;
_Bool arr_3 [20] [20] [20] ;
short arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)7193;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (short)13536;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
