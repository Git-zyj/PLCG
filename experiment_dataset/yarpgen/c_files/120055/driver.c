#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10291;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)65043;
short var_4 = (short)15387;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 7459415827247690871ULL;
unsigned long long int var_7 = 8273935451307166117ULL;
unsigned short var_8 = (unsigned short)29080;
short var_9 = (short)3010;
unsigned short var_10 = (unsigned short)49127;
short var_11 = (short)-24589;
int zero = 0;
unsigned short var_12 = (unsigned short)34626;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)55184;
unsigned short var_15 = (unsigned short)44428;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
short arr_3 [16] ;
unsigned short arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)23988;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned short)20572;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
