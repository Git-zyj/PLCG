#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-6787;
int var_14 = -824929334;
int zero = 0;
unsigned short var_20 = (unsigned short)53174;
unsigned char var_21 = (unsigned char)94;
unsigned int var_22 = 1431412077U;
int var_23 = -314284601;
short var_24 = (short)14024;
_Bool var_25 = (_Bool)1;
short arr_0 [13] [13] ;
short arr_1 [13] ;
unsigned long long int arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)12537 : (short)24498;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)-21186;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 6169526282753309903ULL : 17965122000189888906ULL;
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
