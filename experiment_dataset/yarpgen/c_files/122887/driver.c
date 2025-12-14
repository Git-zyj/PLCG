#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)3538;
signed char var_2 = (signed char)-119;
long long int var_3 = -7408441133410171703LL;
signed char var_6 = (signed char)64;
unsigned short var_9 = (unsigned short)40387;
int zero = 0;
unsigned char var_10 = (unsigned char)102;
short var_11 = (short)27791;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)227;
unsigned int var_14 = 885043475U;
short var_15 = (short)26866;
unsigned int var_16 = 576675629U;
_Bool var_17 = (_Bool)0;
int var_18 = 883239793;
short arr_0 [10] [10] ;
unsigned char arr_1 [10] [10] ;
int arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (short)22429;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 1478079744;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
