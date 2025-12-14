#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4776057054613155806LL;
short var_2 = (short)-19435;
unsigned char var_3 = (unsigned char)111;
int var_7 = 1699793247;
short var_8 = (short)4414;
int var_9 = -1333481778;
unsigned short var_12 = (unsigned short)19259;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = 81394230;
long long int var_15 = -1814064715765769626LL;
unsigned char arr_2 [14] [14] ;
unsigned short arr_4 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)157;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)52343;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
