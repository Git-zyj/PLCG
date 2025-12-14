#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1944043280;
unsigned int var_6 = 753577610U;
unsigned int var_7 = 2761935704U;
unsigned long long int var_8 = 10399437106613064450ULL;
unsigned char var_9 = (unsigned char)43;
int var_10 = -962698821;
int zero = 0;
unsigned int var_14 = 1909173287U;
int var_15 = 2042408014;
unsigned char var_16 = (unsigned char)43;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 5816276972085039208ULL;
signed char var_19 = (signed char)49;
short var_20 = (short)-14386;
unsigned int arr_0 [15] ;
unsigned char arr_2 [13] [13] ;
short arr_3 [13] ;
unsigned int arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 3242382259U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)111;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (short)-14038;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 2094383547U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
