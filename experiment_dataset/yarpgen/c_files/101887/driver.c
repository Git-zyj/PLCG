#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 548436988U;
unsigned char var_1 = (unsigned char)103;
unsigned char var_3 = (unsigned char)203;
unsigned short var_5 = (unsigned short)61254;
unsigned int var_6 = 2220846745U;
unsigned long long int var_7 = 15481544623353677742ULL;
unsigned short var_8 = (unsigned short)3433;
unsigned long long int var_9 = 16450397688080885451ULL;
signed char var_10 = (signed char)15;
long long int var_11 = -1984419018614482137LL;
unsigned long long int var_12 = 14409724386465103195ULL;
unsigned int var_14 = 1241073662U;
int zero = 0;
unsigned long long int var_15 = 9090008939693752959ULL;
long long int var_16 = 675750252129899465LL;
unsigned int var_17 = 4061866734U;
unsigned short var_18 = (unsigned short)27149;
unsigned short var_19 = (unsigned short)33073;
unsigned short var_20 = (unsigned short)30202;
_Bool arr_10 [23] [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
