#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14471;
unsigned long long int var_2 = 13042929940754182758ULL;
int var_4 = -1890063241;
unsigned char var_6 = (unsigned char)128;
unsigned short var_7 = (unsigned short)28705;
unsigned long long int var_8 = 6479886985453416709ULL;
unsigned int var_9 = 1951281975U;
int var_11 = 2066282652;
int zero = 0;
short var_12 = (short)13269;
unsigned short var_13 = (unsigned short)58339;
unsigned short var_14 = (unsigned short)52166;
_Bool arr_1 [25] [25] ;
unsigned char arr_2 [25] ;
long long int arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -4384926940075362038LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
