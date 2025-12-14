#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1541669850392938246ULL;
unsigned long long int var_2 = 2975384443600953863ULL;
int var_3 = 2026776225;
unsigned int var_4 = 1519952120U;
unsigned short var_5 = (unsigned short)17905;
_Bool var_7 = (_Bool)0;
long long int var_8 = -6278984977432234036LL;
signed char var_9 = (signed char)6;
int zero = 0;
unsigned int var_10 = 4140400751U;
short var_11 = (short)7900;
short var_12 = (short)3219;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 969642778U;
unsigned long long int var_15 = 7508337362763364707ULL;
unsigned long long int arr_3 [24] ;
unsigned long long int arr_5 [24] [24] [24] ;
signed char arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 10596094247968458910ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 11434619411616010354ULL : 5638895544121391624ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)127 : (signed char)-87;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
