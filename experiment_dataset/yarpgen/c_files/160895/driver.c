#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)85;
short var_3 = (short)-32526;
short var_5 = (short)32497;
unsigned long long int var_6 = 16777100431599671752ULL;
unsigned int var_10 = 594693688U;
unsigned int var_11 = 4164309011U;
unsigned short var_14 = (unsigned short)18590;
unsigned int var_16 = 2936159502U;
short var_17 = (short)29574;
int zero = 0;
unsigned long long int var_20 = 2762817052898819338ULL;
unsigned char var_21 = (unsigned char)238;
signed char var_22 = (signed char)-1;
unsigned char var_23 = (unsigned char)140;
unsigned int var_24 = 2996925143U;
unsigned long long int var_25 = 2694514673999540503ULL;
short arr_3 [10] [10] ;
signed char arr_4 [10] [10] [10] ;
unsigned long long int arr_8 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (short)30910;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = 18213154554403324318ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
