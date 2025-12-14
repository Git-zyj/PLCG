#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -128828059;
short var_2 = (short)7945;
unsigned long long int var_3 = 5862176496915175537ULL;
unsigned long long int var_4 = 9235878409574574047ULL;
unsigned long long int var_5 = 16087175495312592002ULL;
int var_9 = 1487188561;
unsigned short var_10 = (unsigned short)26500;
unsigned long long int var_11 = 16619633090208572242ULL;
int var_12 = 1862305971;
unsigned int var_13 = 743398667U;
short var_14 = (short)-7405;
short var_15 = (short)-8725;
int zero = 0;
unsigned int var_16 = 2257747430U;
unsigned int var_17 = 213746060U;
short var_18 = (short)3756;
unsigned int arr_0 [13] [13] ;
unsigned int arr_1 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 365206051U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 2322723747U;
}

void checksum() {
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
