#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2661429156U;
long long int var_2 = -4337197833207014271LL;
short var_5 = (short)-20141;
unsigned char var_17 = (unsigned char)161;
unsigned char var_18 = (unsigned char)76;
int zero = 0;
short var_19 = (short)-5956;
unsigned int var_20 = 1046929199U;
unsigned char var_21 = (unsigned char)83;
unsigned long long int var_22 = 14258691991077361392ULL;
short var_23 = (short)27389;
short arr_0 [16] ;
unsigned int arr_1 [16] ;
unsigned long long int arr_6 [17] ;
unsigned int arr_7 [17] ;
long long int arr_4 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (short)14060;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 1176903964U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 16626753105559107153ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 3928550681U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = -4013645429805924943LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
