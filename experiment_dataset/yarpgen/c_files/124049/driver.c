#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)250;
short var_4 = (short)-3201;
short var_6 = (short)-14983;
unsigned long long int var_7 = 4303294510367938137ULL;
long long int var_10 = 744004745743448993LL;
signed char var_12 = (signed char)-62;
unsigned short var_13 = (unsigned short)46830;
unsigned long long int var_14 = 8326940677691974590ULL;
int zero = 0;
signed char var_16 = (signed char)-14;
short var_17 = (short)13823;
signed char var_18 = (signed char)-36;
unsigned int var_19 = 2442923136U;
signed char var_20 = (signed char)22;
unsigned char var_21 = (unsigned char)173;
unsigned int var_22 = 4128643728U;
unsigned int var_23 = 2519391743U;
unsigned char arr_9 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned char)30;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
