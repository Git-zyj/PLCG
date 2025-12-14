#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)64;
short var_6 = (short)5620;
unsigned int var_8 = 952922525U;
unsigned int var_10 = 2295483168U;
signed char var_14 = (signed char)112;
int zero = 0;
unsigned int var_16 = 447987870U;
short var_17 = (short)18478;
unsigned char var_18 = (unsigned char)247;
unsigned char var_19 = (unsigned char)59;
unsigned char var_20 = (unsigned char)244;
short var_21 = (short)-3479;
unsigned char arr_0 [24] ;
unsigned int arr_1 [24] [24] ;
_Bool arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)209;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 2466299497U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
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
