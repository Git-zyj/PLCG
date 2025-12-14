#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1446;
short var_3 = (short)15055;
int var_5 = 1579063277;
signed char var_6 = (signed char)-108;
signed char var_11 = (signed char)76;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 3590787443460654219ULL;
int zero = 0;
short var_16 = (short)-23889;
short var_17 = (short)16911;
short var_18 = (short)26920;
unsigned int var_19 = 1527075272U;
long long int var_20 = 3508387373323696025LL;
_Bool var_21 = (_Bool)1;
unsigned short arr_0 [11] ;
unsigned long long int arr_1 [11] ;
short arr_2 [13] [13] ;
unsigned short arr_3 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)16393;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 4712584795400669628ULL : 4526697883976858374ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-15216 : (short)-26629;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)50731;
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
