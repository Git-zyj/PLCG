#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)27314;
unsigned short var_4 = (unsigned short)2719;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-93;
unsigned int var_8 = 833087013U;
int var_10 = 1826710105;
unsigned char var_11 = (unsigned char)56;
int zero = 0;
signed char var_12 = (signed char)-81;
short var_13 = (short)-9394;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-120;
unsigned int var_16 = 2528436010U;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-4836;
int arr_1 [17] [17] ;
_Bool arr_2 [12] ;
short arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = -2005989367;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (short)-13535;
}

void checksum() {
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
