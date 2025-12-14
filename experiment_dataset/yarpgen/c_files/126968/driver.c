#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1298936936;
unsigned short var_11 = (unsigned short)56145;
unsigned char var_12 = (unsigned char)7;
long long int var_13 = 1684588147964849594LL;
signed char var_14 = (signed char)-106;
unsigned char var_18 = (unsigned char)134;
int zero = 0;
short var_20 = (short)27882;
unsigned char var_21 = (unsigned char)55;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 15092615457426844815ULL;
signed char arr_2 [25] ;
unsigned char arr_3 [25] ;
unsigned char arr_4 [25] ;
_Bool arr_5 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
