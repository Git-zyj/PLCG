#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -546040009;
unsigned short var_3 = (unsigned short)10640;
unsigned char var_6 = (unsigned char)75;
unsigned short var_10 = (unsigned short)26512;
signed char var_12 = (signed char)94;
unsigned short var_14 = (unsigned short)47206;
unsigned long long int var_16 = 1284240486847609213ULL;
unsigned long long int var_17 = 16165080618398977992ULL;
int var_18 = 374613830;
int zero = 0;
unsigned char var_19 = (unsigned char)76;
short var_20 = (short)-28030;
unsigned char var_21 = (unsigned char)41;
unsigned short var_22 = (unsigned short)39807;
int var_23 = 360230933;
signed char var_24 = (signed char)-40;
unsigned char var_25 = (unsigned char)246;
short arr_0 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (short)14062;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
