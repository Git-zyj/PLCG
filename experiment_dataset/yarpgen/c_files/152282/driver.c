#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1843645362;
signed char var_1 = (signed char)73;
unsigned short var_2 = (unsigned short)39090;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 15368925469643252738ULL;
unsigned short var_7 = (unsigned short)7123;
unsigned short var_9 = (unsigned short)45156;
unsigned int var_10 = 1727058010U;
short var_11 = (short)-16775;
signed char var_12 = (signed char)-12;
signed char var_13 = (signed char)-127;
unsigned short var_14 = (unsigned short)50764;
short var_15 = (short)19940;
signed char var_16 = (signed char)(-127 - 1);
int zero = 0;
short var_19 = (short)-5580;
signed char var_20 = (signed char)-104;
unsigned short var_21 = (unsigned short)29130;
unsigned short var_22 = (unsigned short)33260;
unsigned int var_23 = 1222409487U;
unsigned int var_24 = 1245321450U;
unsigned short arr_1 [24] [24] ;
unsigned int arr_5 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)46128;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = 2895089467U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
