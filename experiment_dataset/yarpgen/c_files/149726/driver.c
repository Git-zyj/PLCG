#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27041;
unsigned long long int var_1 = 1151865107458057465ULL;
short var_3 = (short)-11827;
signed char var_4 = (signed char)116;
signed char var_5 = (signed char)118;
unsigned long long int var_9 = 13925852422897615492ULL;
int var_10 = -1298692481;
int zero = 0;
int var_12 = -766195947;
unsigned char var_13 = (unsigned char)97;
unsigned int var_14 = 3893280754U;
unsigned char var_15 = (unsigned char)162;
unsigned short var_16 = (unsigned short)55051;
unsigned char var_17 = (unsigned char)133;
unsigned char var_18 = (unsigned char)192;
unsigned short var_19 = (unsigned short)15479;
short arr_0 [24] ;
unsigned char arr_1 [24] ;
unsigned char arr_2 [24] ;
short arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)-26890;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)16 : (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)12055;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
