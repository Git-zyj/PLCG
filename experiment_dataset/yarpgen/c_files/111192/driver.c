#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3966401666508700811ULL;
int var_1 = 1896296224;
long long int var_2 = 8021096698685126862LL;
short var_4 = (short)-18624;
int var_5 = 786099859;
short var_6 = (short)18854;
int zero = 0;
signed char var_10 = (signed char)-55;
unsigned short var_11 = (unsigned short)29088;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)19343;
unsigned char var_14 = (unsigned char)61;
signed char var_15 = (signed char)12;
signed char var_16 = (signed char)-83;
signed char var_17 = (signed char)-80;
unsigned int var_18 = 4258749538U;
unsigned short var_19 = (unsigned short)13413;
unsigned int var_20 = 1770565803U;
unsigned char var_21 = (unsigned char)200;
unsigned long long int var_22 = 12796533987327056819ULL;
unsigned long long int arr_0 [19] [19] ;
short arr_3 [19] ;
unsigned short arr_4 [17] [17] ;
unsigned char arr_6 [17] ;
unsigned short arr_9 [17] [17] [17] ;
unsigned int arr_13 [17] ;
unsigned long long int arr_17 [23] ;
long long int arr_18 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 3010800464442998433ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (short)-12539;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)30252;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)10034;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = 1597858518U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = 4001645688191034323ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = 6636439634922598395LL;
}

void checksum() {
    hash(&seed, var_10);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
