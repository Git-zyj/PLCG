#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-11;
signed char var_4 = (signed char)-97;
unsigned char var_6 = (unsigned char)72;
short var_8 = (short)-4345;
int var_9 = 1404581696;
int zero = 0;
unsigned short var_11 = (unsigned short)54625;
short var_12 = (short)-1416;
unsigned char var_13 = (unsigned char)171;
unsigned long long int var_14 = 2035123176149630124ULL;
short var_15 = (short)-30040;
int var_16 = 533373329;
int var_17 = 484369709;
unsigned long long int var_18 = 6123372957205867549ULL;
long long int var_19 = 3653056012649180016LL;
unsigned long long int var_20 = 2075615962150283653ULL;
long long int var_21 = 4572652190066621640LL;
long long int var_22 = -1792840252807518530LL;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)136;
long long int arr_1 [10] ;
_Bool arr_2 [23] ;
_Bool arr_4 [23] ;
signed char arr_11 [23] ;
unsigned char arr_16 [23] [23] [23] [23] [23] [23] [23] ;
unsigned long long int arr_18 [17] ;
unsigned short arr_21 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -289941765521330657LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (signed char)-87;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_18 [i_0] = 8970155487076091495ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned short)53880;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
