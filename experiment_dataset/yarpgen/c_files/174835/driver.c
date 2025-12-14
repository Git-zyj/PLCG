#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20266;
signed char var_1 = (signed char)46;
int var_2 = 305236317;
unsigned long long int var_4 = 9679571913584139891ULL;
short var_5 = (short)10099;
int var_10 = 1632576791;
short var_11 = (short)10782;
unsigned short var_12 = (unsigned short)19167;
unsigned char var_13 = (unsigned char)213;
signed char var_14 = (signed char)62;
int zero = 0;
int var_16 = 1868535110;
unsigned long long int var_17 = 13314781591319587614ULL;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)8630;
_Bool arr_5 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
