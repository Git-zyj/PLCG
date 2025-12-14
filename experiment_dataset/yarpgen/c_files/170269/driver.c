#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-38;
unsigned int var_1 = 147338010U;
signed char var_2 = (signed char)103;
unsigned char var_3 = (unsigned char)43;
long long int var_5 = -1388867166659432816LL;
unsigned long long int var_8 = 15193121898726150574ULL;
signed char var_9 = (signed char)44;
signed char var_10 = (signed char)45;
_Bool var_12 = (_Bool)1;
short var_14 = (short)3151;
int zero = 0;
long long int var_15 = 6604497965202013283LL;
unsigned short var_16 = (unsigned short)17693;
short var_17 = (short)-31550;
unsigned int var_18 = 436589963U;
unsigned long long int var_19 = 13002412338745924535ULL;
_Bool var_20 = (_Bool)0;
unsigned long long int arr_2 [17] ;
unsigned int arr_4 [17] [17] [17] ;
_Bool arr_5 [17] [17] [17] ;
unsigned char arr_7 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 12096780464542841386ULL : 5281249732386757242ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2657130355U : 193427642U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)126 : (unsigned char)51;
}

void checksum() {
    hash(&seed, var_15);
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
