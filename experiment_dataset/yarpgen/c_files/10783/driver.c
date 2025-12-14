#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1631063639;
signed char var_1 = (signed char)-10;
long long int var_2 = -941856140546503526LL;
unsigned short var_3 = (unsigned short)56570;
unsigned long long int var_5 = 11722278075559053074ULL;
signed char var_7 = (signed char)-84;
unsigned int var_12 = 1221730106U;
int zero = 0;
long long int var_15 = -6785723396718289226LL;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-90;
unsigned char var_18 = (unsigned char)82;
short var_19 = (short)-24721;
unsigned short var_20 = (unsigned short)54021;
short var_21 = (short)26465;
unsigned long long int arr_2 [18] ;
unsigned long long int arr_4 [18] [18] ;
unsigned int arr_5 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 4206014436830637565ULL : 1818482764469885863ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 6884855540569328348ULL : 14869177632320453782ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 2090451920U : 1545658760U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
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
