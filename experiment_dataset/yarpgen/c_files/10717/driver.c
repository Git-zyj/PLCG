#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)27120;
unsigned short var_6 = (unsigned short)27579;
unsigned short var_10 = (unsigned short)461;
unsigned short var_12 = (unsigned short)30269;
long long int var_13 = 447705423224683754LL;
unsigned short var_15 = (unsigned short)52754;
short var_16 = (short)-22138;
unsigned short var_17 = (unsigned short)62882;
int zero = 0;
int var_18 = -1948280000;
unsigned int var_19 = 4227929821U;
long long int var_20 = 8131378345268699227LL;
unsigned int arr_1 [17] [17] ;
unsigned int arr_4 [17] [17] [17] ;
long long int arr_5 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 2269830042U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2279974088U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 1576909475569080373LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
