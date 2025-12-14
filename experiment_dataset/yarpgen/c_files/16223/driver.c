#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -541347840;
unsigned long long int var_8 = 279307752327363446ULL;
unsigned short var_12 = (unsigned short)53339;
long long int var_16 = -451279553196094920LL;
unsigned long long int var_17 = 101072007046438879ULL;
int zero = 0;
unsigned long long int var_18 = 1924396033678035246ULL;
signed char var_19 = (signed char)-19;
short var_20 = (short)-13135;
signed char var_21 = (signed char)50;
unsigned short var_22 = (unsigned short)12010;
unsigned long long int arr_0 [16] [16] ;
long long int arr_2 [16] [16] ;
long long int arr_5 [16] [16] ;
unsigned short arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 5096343553848092511ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = -2129096083442423928LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = -232457289263793784LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned short)28476;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
