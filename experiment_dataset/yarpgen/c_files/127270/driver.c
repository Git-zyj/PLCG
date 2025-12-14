#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)971;
unsigned int var_3 = 3006391664U;
unsigned short var_5 = (unsigned short)24144;
int var_7 = 167891727;
unsigned char var_8 = (unsigned char)45;
unsigned char var_9 = (unsigned char)195;
unsigned short var_10 = (unsigned short)13982;
unsigned short var_14 = (unsigned short)32825;
short var_16 = (short)16938;
signed char var_17 = (signed char)18;
int zero = 0;
int var_19 = -1600479438;
unsigned char var_20 = (unsigned char)146;
int var_21 = 2077422850;
unsigned int var_22 = 899779318U;
int var_23 = 1430072395;
short var_24 = (short)-29950;
long long int var_25 = -4684544653214073009LL;
int var_26 = -822417790;
unsigned short var_27 = (unsigned short)17024;
short var_28 = (short)17553;
unsigned int arr_0 [12] ;
unsigned char arr_3 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 2982933021U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)79 : (unsigned char)100;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
