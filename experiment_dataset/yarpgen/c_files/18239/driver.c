#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)99;
unsigned char var_6 = (unsigned char)173;
unsigned int var_8 = 435374225U;
unsigned char var_13 = (unsigned char)223;
unsigned short var_15 = (unsigned short)52104;
int zero = 0;
long long int var_19 = -7858662444837943530LL;
int var_20 = -121709268;
unsigned char var_21 = (unsigned char)207;
signed char var_22 = (signed char)123;
short var_23 = (short)15044;
short var_24 = (short)-32037;
unsigned short var_25 = (unsigned short)5017;
unsigned char arr_0 [12] [12] ;
short arr_2 [12] ;
short arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)3116 : (short)20109;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)-22424;
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
