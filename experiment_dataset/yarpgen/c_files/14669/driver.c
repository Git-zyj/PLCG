#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4039985383892479252LL;
unsigned int var_2 = 1447172450U;
unsigned long long int var_4 = 2886570068043748635ULL;
_Bool var_5 = (_Bool)0;
int var_7 = 1147333540;
short var_8 = (short)11651;
signed char var_9 = (signed char)-57;
unsigned int var_10 = 720865299U;
signed char var_12 = (signed char)-32;
signed char var_14 = (signed char)-60;
unsigned short var_16 = (unsigned short)53696;
short var_17 = (short)30103;
int zero = 0;
int var_19 = 272424718;
signed char var_20 = (signed char)92;
unsigned int var_21 = 652324800U;
signed char arr_5 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-20 : (signed char)11;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
