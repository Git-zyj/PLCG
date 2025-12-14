#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_3 = (signed char)-97;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)36811;
unsigned long long int var_7 = 13295939854434382625ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_17 = 1266915077220148981LL;
unsigned int var_18 = 613639066U;
unsigned char var_19 = (unsigned char)233;
signed char var_20 = (signed char)-55;
unsigned short var_21 = (unsigned short)51290;
unsigned long long int var_22 = 11338134940847207079ULL;
short var_23 = (short)8667;
unsigned short var_24 = (unsigned short)59070;
signed char var_25 = (signed char)-24;
unsigned short var_26 = (unsigned short)13568;
int var_27 = 507207015;
signed char arr_0 [23] ;
unsigned short arr_1 [23] ;
unsigned char arr_5 [19] ;
unsigned long long int arr_6 [19] ;
long long int arr_2 [23] [23] ;
unsigned char arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)21087;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 5763493971148070442ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = -5909724523224589087LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned char)24;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
