#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2151;
long long int var_3 = 6326288060233390999LL;
int var_5 = -8937930;
unsigned int var_6 = 1555255958U;
_Bool var_7 = (_Bool)1;
long long int var_8 = -3258210822016230214LL;
short var_9 = (short)-14555;
signed char var_10 = (signed char)4;
unsigned char var_12 = (unsigned char)146;
_Bool var_13 = (_Bool)1;
long long int var_14 = -9054131076973942891LL;
int zero = 0;
signed char var_15 = (signed char)-114;
long long int var_16 = -252109125140349782LL;
signed char var_17 = (signed char)108;
int var_18 = 1687869911;
short var_19 = (short)21888;
unsigned char arr_6 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)149;
}

void checksum() {
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
