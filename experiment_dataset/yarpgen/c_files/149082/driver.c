#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_4 = (short)-29135;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)128;
int var_7 = 928051831;
int zero = 0;
short var_10 = (short)-2323;
unsigned char var_11 = (unsigned char)213;
short var_12 = (short)25926;
unsigned char var_13 = (unsigned char)32;
short var_14 = (short)-10070;
int var_15 = 100812615;
unsigned char var_16 = (unsigned char)107;
int var_17 = -2140388767;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
_Bool arr_0 [19] [19] ;
unsigned char arr_1 [19] ;
unsigned char arr_7 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)99 : (unsigned char)181;
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
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
