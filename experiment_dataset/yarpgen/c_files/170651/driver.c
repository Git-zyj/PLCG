#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13549;
short var_1 = (short)-5021;
_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)210;
unsigned char var_9 = (unsigned char)94;
unsigned long long int var_10 = 2597637205736808879ULL;
unsigned char var_11 = (unsigned char)158;
signed char var_12 = (signed char)48;
int var_13 = 1785270785;
short var_14 = (short)20143;
int zero = 0;
int var_16 = 94421595;
unsigned short var_17 = (unsigned short)31402;
unsigned short var_18 = (unsigned short)59441;
short var_19 = (short)-25743;
unsigned long long int var_20 = 11349031511064328289ULL;
short arr_0 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-18713;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
