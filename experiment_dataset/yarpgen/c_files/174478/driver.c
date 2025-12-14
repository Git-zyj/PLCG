#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3991573124977911950ULL;
short var_9 = (short)-20702;
int var_12 = 989196193;
int var_14 = 1832409909;
int zero = 0;
unsigned long long int var_16 = 10482263526434261205ULL;
unsigned short var_17 = (unsigned short)22471;
int var_18 = 535326357;
int var_19 = 2054425847;
long long int arr_0 [10] ;
int arr_1 [10] ;
short arr_2 [10] ;
int arr_3 [10] ;
long long int arr_5 [10] [10] [10] ;
int arr_6 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 2068397230415367679LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -319622074;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)20401;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = -527934704;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -619317424294192552LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -1916705493;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
