#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3093524406U;
unsigned short var_4 = (unsigned short)37782;
int var_5 = 137241334;
int var_6 = 465017939;
signed char var_8 = (signed char)121;
signed char var_10 = (signed char)-21;
int var_11 = -1609862559;
unsigned char var_13 = (unsigned char)17;
int zero = 0;
unsigned int var_16 = 899962332U;
unsigned char var_17 = (unsigned char)175;
_Bool var_18 = (_Bool)1;
int var_19 = -1159726135;
unsigned int var_20 = 132032450U;
unsigned char var_21 = (unsigned char)166;
unsigned char var_22 = (unsigned char)3;
signed char arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)48 : (signed char)-50;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
