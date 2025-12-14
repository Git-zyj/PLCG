#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)22;
int var_3 = 1881176179;
signed char var_4 = (signed char)-77;
unsigned int var_5 = 2538960758U;
unsigned short var_7 = (unsigned short)48801;
signed char var_9 = (signed char)-101;
unsigned int var_10 = 1607439575U;
unsigned int var_11 = 1137935325U;
unsigned short var_12 = (unsigned short)58383;
long long int var_13 = -6857604709847370092LL;
int var_14 = -1732520769;
int zero = 0;
unsigned int var_15 = 294327435U;
short var_16 = (short)-1784;
_Bool var_17 = (_Bool)1;
short arr_2 [20] ;
long long int arr_5 [20] ;
short arr_6 [20] [20] ;
long long int arr_11 [20] [20] [20] [20] ;
long long int arr_12 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)-21563;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = -1292924009159842724LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (short)18993;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = -1278684792481388425LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = -947028696430701956LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
