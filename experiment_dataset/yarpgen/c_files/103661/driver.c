#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3885065579656944725ULL;
int var_2 = -551295897;
unsigned char var_3 = (unsigned char)4;
long long int var_4 = -7204326950417331474LL;
int var_5 = 2022061409;
unsigned long long int var_6 = 7381089370192883008ULL;
int var_9 = -1752348894;
int var_10 = 1805873815;
int var_12 = -95560958;
unsigned short var_13 = (unsigned short)54172;
signed char var_14 = (signed char)-31;
short var_16 = (short)-2730;
int zero = 0;
unsigned short var_17 = (unsigned short)53765;
int var_18 = -1254669566;
int var_19 = -930868578;
unsigned int var_20 = 1895454384U;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)121;
unsigned short var_23 = (unsigned short)6594;
unsigned long long int arr_6 [23] [23] [23] ;
int arr_7 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 18103690492689013347ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = -1365547068;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
