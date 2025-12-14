#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1552243095U;
unsigned char var_1 = (unsigned char)111;
unsigned char var_3 = (unsigned char)42;
unsigned char var_4 = (unsigned char)49;
short var_5 = (short)21560;
unsigned int var_6 = 3601307581U;
unsigned char var_7 = (unsigned char)237;
unsigned int var_10 = 4244808888U;
long long int var_11 = -1466610245540507782LL;
unsigned char var_12 = (unsigned char)239;
int zero = 0;
short var_13 = (short)-23736;
unsigned int var_14 = 4050516798U;
unsigned short var_15 = (unsigned short)44568;
unsigned char var_16 = (unsigned char)121;
int var_17 = 1701263361;
unsigned char arr_3 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)154;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
