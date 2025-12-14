#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30854;
signed char var_5 = (signed char)-95;
unsigned int var_6 = 688091291U;
long long int var_11 = 8780696782911052595LL;
int var_13 = -720301348;
int zero = 0;
unsigned int var_15 = 3675904893U;
int var_16 = 1341122229;
int var_17 = -1212727106;
unsigned char var_18 = (unsigned char)101;
unsigned short arr_0 [23] ;
unsigned int arr_2 [23] ;
unsigned char arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)434;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 2200113987U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)235 : (unsigned char)244;
}

void checksum() {
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
