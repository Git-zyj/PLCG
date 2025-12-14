#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)21;
unsigned long long int var_3 = 3023120588774972813ULL;
unsigned char var_7 = (unsigned char)73;
unsigned int var_14 = 1228578041U;
unsigned char var_15 = (unsigned char)40;
unsigned char var_19 = (unsigned char)188;
int zero = 0;
unsigned short var_20 = (unsigned short)51453;
int var_21 = -1086370568;
short var_22 = (short)-12643;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 13707450695029232711ULL;
unsigned int arr_8 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = 852478606U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
