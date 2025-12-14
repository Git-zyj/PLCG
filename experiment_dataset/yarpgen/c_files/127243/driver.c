#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-14;
unsigned long long int var_1 = 17109467534476741661ULL;
signed char var_2 = (signed char)-32;
unsigned char var_3 = (unsigned char)144;
signed char var_4 = (signed char)111;
signed char var_5 = (signed char)-91;
signed char var_6 = (signed char)-15;
unsigned char var_8 = (unsigned char)89;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 10147207639208181674ULL;
int zero = 0;
short var_11 = (short)-9116;
signed char var_12 = (signed char)-37;
short var_13 = (short)-30271;
unsigned char var_14 = (unsigned char)4;
signed char var_15 = (signed char)77;
signed char var_16 = (signed char)125;
signed char var_17 = (signed char)97;
signed char var_18 = (signed char)-73;
short var_19 = (short)-11157;
int var_20 = -478095679;
int arr_2 [24] ;
short arr_5 [24] [24] ;
short arr_6 [24] ;
unsigned int arr_9 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = -168830485;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-7600;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (short)5602;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = 2854564506U;
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
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
