#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_2 = (signed char)125;
unsigned int var_3 = 3790391379U;
int var_4 = 249035379;
int var_5 = -1428908630;
signed char var_6 = (signed char)-23;
unsigned short var_7 = (unsigned short)23732;
short var_8 = (short)-2251;
unsigned char var_10 = (unsigned char)181;
int zero = 0;
unsigned short var_11 = (unsigned short)27295;
unsigned char var_12 = (unsigned char)135;
unsigned char var_13 = (unsigned char)220;
_Bool var_14 = (_Bool)0;
long long int var_15 = -8134559091957645507LL;
signed char var_16 = (signed char)-38;
unsigned long long int var_17 = 5697393903061987093ULL;
short var_18 = (short)-18826;
unsigned long long int arr_0 [12] ;
long long int arr_3 [12] [12] ;
_Bool arr_4 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 6317231287625837562ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 2159710137486286497LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
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
