#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19526;
unsigned char var_4 = (unsigned char)29;
unsigned char var_8 = (unsigned char)27;
unsigned int var_15 = 1700363702U;
int zero = 0;
short var_17 = (short)-32549;
unsigned long long int var_18 = 12791572581791203896ULL;
int var_19 = -2088885875;
unsigned long long int var_20 = 5961683948725012308ULL;
signed char var_21 = (signed char)83;
unsigned long long int arr_0 [18] ;
unsigned short arr_1 [18] ;
unsigned int arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 11707181022425471980ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)29341;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = 2673717624U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
