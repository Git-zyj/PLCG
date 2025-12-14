#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6600602615642237675LL;
int var_2 = -399310853;
unsigned int var_3 = 2759977526U;
unsigned char var_4 = (unsigned char)125;
unsigned short var_5 = (unsigned short)7881;
unsigned char var_6 = (unsigned char)42;
unsigned short var_8 = (unsigned short)37503;
unsigned short var_9 = (unsigned short)29360;
unsigned short var_10 = (unsigned short)41353;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-16029;
int zero = 0;
unsigned char var_13 = (unsigned char)66;
unsigned short var_14 = (unsigned short)64966;
short var_15 = (short)22254;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 12658571616182537471ULL;
unsigned char var_18 = (unsigned char)100;
_Bool arr_7 [16] [16] [16] [16] ;
signed char arr_11 [16] [16] [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-17;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
