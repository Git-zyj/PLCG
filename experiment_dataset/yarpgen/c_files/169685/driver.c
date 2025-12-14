#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 865717316;
unsigned long long int var_1 = 12017110111610015316ULL;
unsigned long long int var_2 = 10804751413189410938ULL;
unsigned char var_4 = (unsigned char)92;
unsigned short var_5 = (unsigned short)50723;
short var_7 = (short)-29330;
short var_8 = (short)13454;
unsigned short var_9 = (unsigned short)29001;
int var_12 = -982010856;
unsigned char var_13 = (unsigned char)141;
unsigned long long int var_16 = 13203958551255409244ULL;
int zero = 0;
short var_17 = (short)-29426;
unsigned char var_18 = (unsigned char)100;
unsigned short var_19 = (unsigned short)33496;
int var_20 = -953323011;
_Bool arr_8 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
