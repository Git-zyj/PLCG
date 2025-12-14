#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-55;
unsigned char var_5 = (unsigned char)31;
short var_6 = (short)-6525;
long long int var_8 = 5247048330882806665LL;
unsigned char var_10 = (unsigned char)168;
unsigned short var_13 = (unsigned short)59276;
unsigned int var_14 = 2954117442U;
unsigned int var_17 = 2928142286U;
unsigned int var_18 = 1430661445U;
int zero = 0;
int var_20 = 590570955;
signed char var_21 = (signed char)30;
unsigned short var_22 = (unsigned short)41679;
unsigned short var_23 = (unsigned short)39326;
short var_24 = (short)28263;
short var_25 = (short)-14352;
short var_26 = (short)5211;
signed char arr_1 [19] ;
unsigned long long int arr_3 [19] [19] ;
long long int arr_4 [19] [19] ;
_Bool arr_5 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 14302132044708501776ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = -9206884443110626426LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
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
