#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 910527957;
long long int var_3 = 4019694254353850385LL;
signed char var_4 = (signed char)16;
long long int var_5 = 6497974867198156308LL;
signed char var_8 = (signed char)125;
unsigned char var_11 = (unsigned char)63;
unsigned long long int var_13 = 14064492409855666673ULL;
int zero = 0;
int var_14 = -1696974568;
_Bool var_15 = (_Bool)0;
int var_16 = -1239323177;
unsigned int arr_0 [10] ;
long long int arr_6 [10] [10] [10] [10] ;
unsigned short arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 3578039361U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -6617006526832844167LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (unsigned short)19061;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
