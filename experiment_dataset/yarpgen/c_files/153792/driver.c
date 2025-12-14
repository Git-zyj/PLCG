#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)133;
unsigned long long int var_1 = 15238987879340174274ULL;
signed char var_2 = (signed char)33;
int var_4 = 1609090993;
short var_5 = (short)27600;
signed char var_9 = (signed char)31;
unsigned char var_12 = (unsigned char)170;
int zero = 0;
int var_15 = 193670174;
long long int var_16 = -6160224175685557128LL;
int var_17 = -1407468002;
short var_18 = (short)2175;
unsigned long long int var_19 = 12809841597046883537ULL;
long long int var_20 = 1523799227978394763LL;
signed char arr_0 [16] [16] ;
long long int arr_1 [16] ;
short arr_2 [16] [16] ;
long long int arr_3 [16] ;
int arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 2629297822362850904LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (short)2929;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 6645480717319059649LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 1678328790;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
