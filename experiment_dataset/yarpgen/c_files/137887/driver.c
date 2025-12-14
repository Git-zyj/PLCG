#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2904;
unsigned int var_1 = 3677606373U;
_Bool var_4 = (_Bool)0;
unsigned int var_7 = 2212874358U;
unsigned char var_8 = (unsigned char)114;
unsigned int var_12 = 1225418472U;
short var_16 = (short)12517;
int zero = 0;
short var_19 = (short)1269;
short var_20 = (short)15807;
unsigned long long int var_21 = 10041456136697817973ULL;
short var_22 = (short)10233;
long long int var_23 = -7832713568150431446LL;
_Bool arr_1 [18] ;
long long int arr_3 [18] ;
unsigned long long int arr_4 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -6974561334032817003LL : 9130712085114994240LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1255824955504756791ULL : 3494357800550125547ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
