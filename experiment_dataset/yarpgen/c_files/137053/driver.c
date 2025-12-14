#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-87;
int var_1 = 1214247183;
_Bool var_5 = (_Bool)0;
int var_6 = 1115508153;
int var_8 = 2144897212;
signed char var_9 = (signed char)-88;
unsigned int var_12 = 1133694448U;
int var_14 = 737180728;
int zero = 0;
signed char var_16 = (signed char)86;
int var_17 = -197790835;
short var_18 = (short)19301;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2581709840U;
long long int var_21 = 8229235559881384021LL;
unsigned long long int var_22 = 5552382511012891172ULL;
int arr_0 [13] ;
signed char arr_2 [13] ;
signed char arr_4 [13] ;
unsigned int arr_11 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -1216018844 : -1191101009;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (signed char)-106;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1341833229U : 3865033498U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
