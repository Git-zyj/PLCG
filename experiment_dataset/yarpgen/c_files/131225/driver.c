#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -933340881;
unsigned short var_1 = (unsigned short)30784;
long long int var_2 = 8226244195681072719LL;
int var_5 = -2041623098;
signed char var_6 = (signed char)-26;
unsigned char var_7 = (unsigned char)83;
unsigned long long int var_8 = 7203283972910489732ULL;
unsigned short var_9 = (unsigned short)53645;
int zero = 0;
unsigned long long int var_11 = 3530239423169980667ULL;
unsigned short var_12 = (unsigned short)51190;
short var_13 = (short)20159;
short var_14 = (short)-20615;
unsigned short var_15 = (unsigned short)64998;
signed char arr_1 [10] ;
long long int arr_4 [17] [17] ;
unsigned char arr_5 [17] ;
unsigned int arr_3 [10] ;
unsigned short arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)-73;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 1917643965399988707LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 2631919839U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (unsigned short)23560;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
