#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)23436;
_Bool var_3 = (_Bool)1;
_Bool var_7 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_14 = (short)-9263;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-108;
_Bool var_17 = (_Bool)0;
short var_18 = (short)19679;
unsigned int var_19 = 3867697455U;
short var_20 = (short)9578;
unsigned short var_21 = (unsigned short)17106;
unsigned char var_22 = (unsigned char)237;
long long int var_23 = -2659830760504604237LL;
_Bool var_24 = (_Bool)1;
short arr_0 [23] ;
unsigned long long int arr_2 [23] [23] ;
short arr_4 [23] ;
unsigned long long int arr_7 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)-14289;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 13528237142033688385ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (short)12292;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 5664205831104494885ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
