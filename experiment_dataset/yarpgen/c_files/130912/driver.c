#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 86488872872998241LL;
unsigned short var_2 = (unsigned short)28815;
short var_3 = (short)27358;
signed char var_6 = (signed char)7;
int var_7 = -1451443674;
short var_10 = (short)-23194;
unsigned char var_12 = (unsigned char)188;
unsigned char var_14 = (unsigned char)93;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 3342191431U;
short var_17 = (short)-19087;
signed char var_18 = (signed char)-60;
unsigned long long int var_19 = 2481766434756662942ULL;
signed char var_20 = (signed char)44;
unsigned char var_21 = (unsigned char)185;
signed char arr_1 [21] [21] ;
short arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (short)2379;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
