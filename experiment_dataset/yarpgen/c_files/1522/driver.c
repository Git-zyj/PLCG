#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 531701988;
unsigned int var_6 = 1114904012U;
_Bool var_7 = (_Bool)0;
unsigned char var_15 = (unsigned char)234;
short var_17 = (short)-1658;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)84;
int zero = 0;
unsigned short var_20 = (unsigned short)19820;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-1905;
short var_23 = (short)-3746;
short var_24 = (short)15435;
_Bool var_25 = (_Bool)1;
signed char var_26 = (signed char)99;
long long int arr_0 [20] [20] ;
long long int arr_1 [20] ;
unsigned char arr_2 [20] [20] ;
short arr_7 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 4573964881409844470LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -4458975004036793013LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)59;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-8400;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
