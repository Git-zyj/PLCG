#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)40;
signed char var_6 = (signed char)-115;
int var_7 = -1786714105;
unsigned int var_13 = 223181363U;
int zero = 0;
long long int var_15 = -1230207795854499128LL;
unsigned char var_16 = (unsigned char)199;
signed char var_17 = (signed char)11;
unsigned short var_18 = (unsigned short)48892;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)61;
signed char var_21 = (signed char)-97;
short arr_0 [23] ;
unsigned int arr_1 [23] ;
short arr_2 [23] ;
unsigned short arr_3 [23] [23] ;
long long int arr_4 [23] ;
signed char arr_6 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)-16310;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 71693274U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (short)16180;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)55663;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = -8647062028061741512LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-74;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
