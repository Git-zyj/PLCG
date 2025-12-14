#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1245225190;
unsigned int var_3 = 3471993818U;
short var_5 = (short)29970;
long long int var_6 = -5418583794608843167LL;
unsigned short var_7 = (unsigned short)28161;
int var_8 = -1059824021;
unsigned short var_9 = (unsigned short)30382;
int zero = 0;
long long int var_10 = -2318166436697528909LL;
long long int var_11 = -266715062704764278LL;
short var_12 = (short)13596;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)7802;
signed char arr_2 [18] ;
long long int arr_5 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)-90;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? -8648178665568180974LL : -6057089286436587076LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
