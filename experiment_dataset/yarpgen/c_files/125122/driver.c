#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)16;
unsigned char var_1 = (unsigned char)153;
unsigned int var_2 = 995683267U;
unsigned char var_3 = (unsigned char)53;
unsigned char var_4 = (unsigned char)153;
unsigned char var_5 = (unsigned char)137;
unsigned char var_6 = (unsigned char)250;
unsigned char var_7 = (unsigned char)81;
unsigned char var_8 = (unsigned char)57;
signed char var_10 = (signed char)114;
int zero = 0;
int var_11 = -155662174;
unsigned char var_12 = (unsigned char)11;
int var_13 = 202849658;
signed char var_14 = (signed char)-90;
unsigned char var_15 = (unsigned char)188;
short arr_0 [10] ;
short arr_1 [10] ;
signed char arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)-14655;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)7299;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)70;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
