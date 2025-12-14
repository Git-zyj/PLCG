#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)168;
short var_1 = (short)-26438;
short var_2 = (short)19972;
long long int var_4 = 8029659450074983799LL;
int var_5 = 292164897;
unsigned int var_6 = 1108496306U;
int var_8 = -569336905;
long long int var_10 = -7036757718202050945LL;
int var_11 = 1344090390;
int zero = 0;
unsigned long long int var_12 = 9292406130956714676ULL;
unsigned long long int var_13 = 6809780883430077680ULL;
signed char var_14 = (signed char)-120;
long long int var_15 = 6678676324701095835LL;
short var_16 = (short)-14447;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
short arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-7261;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
