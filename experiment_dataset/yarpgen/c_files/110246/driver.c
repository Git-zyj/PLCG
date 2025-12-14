#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)64;
signed char var_5 = (signed char)-108;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)15;
unsigned char var_9 = (unsigned char)181;
short var_11 = (short)-20760;
unsigned char var_12 = (unsigned char)212;
unsigned char var_13 = (unsigned char)139;
signed char var_14 = (signed char)107;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = -4557037976772439975LL;
unsigned short var_17 = (unsigned short)28606;
unsigned long long int var_18 = 12973026531288286179ULL;
unsigned char var_19 = (unsigned char)84;
unsigned long long int var_20 = 7079982137692856737ULL;
unsigned long long int var_21 = 2398562784410194457ULL;
_Bool arr_1 [20] [20] ;
unsigned int arr_3 [20] ;
unsigned short arr_5 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 1321528491U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)50855 : (unsigned short)42537;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
