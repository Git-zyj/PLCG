#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7476151839434521969ULL;
unsigned long long int var_3 = 2227506763336796411ULL;
unsigned char var_4 = (unsigned char)237;
long long int var_5 = 6524438836561876861LL;
unsigned char var_8 = (unsigned char)30;
int zero = 0;
unsigned int var_10 = 3231643216U;
int var_11 = 2063148120;
short var_12 = (short)9470;
long long int var_13 = 8024339563326489994LL;
int var_14 = 1378610454;
unsigned char var_15 = (unsigned char)49;
unsigned long long int var_16 = 692146184363158795ULL;
unsigned long long int var_17 = 11061570304205085591ULL;
unsigned short var_18 = (unsigned short)63630;
unsigned short arr_0 [14] [14] ;
unsigned short arr_4 [14] [14] ;
short arr_6 [14] [14] [14] [14] ;
unsigned long long int arr_7 [14] [14] ;
unsigned int arr_9 [14] [14] [14] [14] ;
long long int arr_12 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)27583;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)1309;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)-6473;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = 443240377199309644ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 2874452491U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = -5466850507555502501LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
