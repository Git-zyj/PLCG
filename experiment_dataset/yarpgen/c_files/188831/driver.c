#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)44;
int var_4 = -1048231051;
int var_5 = 1980696229;
long long int var_9 = 9179235335023535095LL;
long long int var_11 = -1519576609334679558LL;
int var_12 = -2077611741;
long long int var_13 = 7763492222215990488LL;
int zero = 0;
int var_14 = 268560243;
int var_15 = 701122303;
long long int var_16 = -7707920527620327285LL;
unsigned char var_17 = (unsigned char)171;
short var_18 = (short)-31676;
int var_19 = 949419836;
signed char var_20 = (signed char)-26;
short var_21 = (short)-28747;
short arr_1 [11] ;
short arr_4 [23] ;
unsigned long long int arr_6 [23] [23] [23] ;
int arr_2 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)-12931 : (short)28012;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (short)18876;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 12519911400706111347ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 108786835 : 803131594;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
