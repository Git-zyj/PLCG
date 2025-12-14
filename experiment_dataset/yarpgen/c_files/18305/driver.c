#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)77;
unsigned int var_1 = 303989831U;
unsigned int var_2 = 2320832688U;
int var_3 = -1005061857;
unsigned long long int var_4 = 4194130570542596117ULL;
unsigned long long int var_5 = 13453173286049774337ULL;
unsigned char var_6 = (unsigned char)135;
short var_8 = (short)-4108;
int var_9 = -945622148;
unsigned char var_10 = (unsigned char)212;
int zero = 0;
unsigned long long int var_11 = 13315043879371130367ULL;
int var_12 = 1469001172;
unsigned long long int var_13 = 11901489795356224418ULL;
short var_14 = (short)18722;
unsigned char var_15 = (unsigned char)103;
short var_16 = (short)23630;
int var_17 = -2028417704;
int arr_0 [14] [14] ;
short arr_1 [14] ;
short arr_3 [17] [17] ;
unsigned long long int arr_4 [17] ;
unsigned char arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = -1158306191;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (short)4992;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (short)25959;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 12369452244697091390ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)92;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
