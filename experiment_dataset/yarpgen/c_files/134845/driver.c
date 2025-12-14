#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)17489;
unsigned short var_2 = (unsigned short)27783;
unsigned short var_3 = (unsigned short)17822;
unsigned short var_4 = (unsigned short)51985;
unsigned short var_5 = (unsigned short)54573;
unsigned short var_6 = (unsigned short)13268;
unsigned short var_7 = (unsigned short)12042;
unsigned short var_9 = (unsigned short)36295;
unsigned short var_10 = (unsigned short)28853;
unsigned short var_11 = (unsigned short)6861;
unsigned short var_12 = (unsigned short)50727;
unsigned short var_13 = (unsigned short)60766;
unsigned short var_14 = (unsigned short)32986;
int zero = 0;
unsigned short var_15 = (unsigned short)48485;
unsigned short var_16 = (unsigned short)24181;
unsigned short var_17 = (unsigned short)15364;
unsigned short arr_4 [11] ;
unsigned short arr_5 [11] [11] ;
unsigned short arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)6180 : (unsigned short)1560;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)29264 : (unsigned short)56440;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)58191 : (unsigned short)35996;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
