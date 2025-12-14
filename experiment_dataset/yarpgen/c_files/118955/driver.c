#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)114;
unsigned char var_3 = (unsigned char)132;
short var_5 = (short)28513;
short var_7 = (short)8554;
unsigned char var_8 = (unsigned char)188;
unsigned long long int var_10 = 14374874444387142857ULL;
int var_12 = 1252819195;
unsigned short var_13 = (unsigned short)19012;
int zero = 0;
unsigned short var_14 = (unsigned short)51634;
signed char var_15 = (signed char)121;
_Bool var_16 = (_Bool)0;
int var_17 = -1714777074;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)35042;
_Bool var_20 = (_Bool)0;
unsigned short arr_0 [18] [18] ;
unsigned short arr_3 [18] [18] ;
_Bool arr_6 [18] [18] ;
short arr_7 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)8927 : (unsigned short)31307;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)51758 : (unsigned short)45573;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (short)29359;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
