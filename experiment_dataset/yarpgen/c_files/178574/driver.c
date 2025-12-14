#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)142;
signed char var_2 = (signed char)52;
unsigned long long int var_4 = 6813224948652704773ULL;
int var_7 = 944863160;
int var_8 = -869768403;
signed char var_11 = (signed char)-6;
signed char var_14 = (signed char)8;
int zero = 0;
short var_15 = (short)-1872;
signed char var_16 = (signed char)126;
signed char var_17 = (signed char)113;
unsigned int var_18 = 2889601992U;
signed char var_19 = (signed char)-58;
unsigned short var_20 = (unsigned short)19852;
signed char arr_2 [12] ;
unsigned long long int arr_3 [12] [12] ;
unsigned long long int arr_4 [12] [12] ;
unsigned long long int arr_9 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (signed char)-81;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 8287404359193787347ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 6639362853373802473ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 13964824784174566446ULL : 17393908028250278789ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
