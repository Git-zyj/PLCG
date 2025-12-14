#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3523221940455580081LL;
unsigned int var_1 = 1964245024U;
unsigned long long int var_2 = 5617609486707231994ULL;
signed char var_4 = (signed char)102;
unsigned short var_5 = (unsigned short)64798;
_Bool var_6 = (_Bool)1;
long long int var_8 = 5588559281662354916LL;
int zero = 0;
short var_11 = (short)29775;
unsigned long long int var_12 = 11549862728410205349ULL;
_Bool var_13 = (_Bool)1;
int var_14 = -1292122124;
unsigned int var_15 = 4109994420U;
unsigned char var_16 = (unsigned char)206;
unsigned char var_17 = (unsigned char)61;
int var_18 = -1820869535;
_Bool var_19 = (_Bool)0;
unsigned short arr_8 [23] [23] [23] [23] [23] [23] ;
int arr_9 [23] ;
unsigned char arr_4 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)6439;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = 880074415;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)191;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
