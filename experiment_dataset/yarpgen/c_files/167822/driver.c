#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6529;
long long int var_1 = 9153078959956251160LL;
unsigned short var_2 = (unsigned short)40685;
unsigned short var_3 = (unsigned short)17262;
long long int var_4 = 3865902834576496393LL;
short var_5 = (short)22651;
unsigned char var_6 = (unsigned char)31;
unsigned char var_7 = (unsigned char)15;
unsigned char var_9 = (unsigned char)66;
long long int var_10 = -6806993791942490501LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)12;
unsigned short var_15 = (unsigned short)6757;
short var_16 = (short)21491;
short var_17 = (short)-1305;
short arr_7 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)-28188;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
