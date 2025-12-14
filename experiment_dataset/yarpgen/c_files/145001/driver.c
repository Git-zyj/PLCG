#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1467884059501064674LL;
short var_6 = (short)-1735;
unsigned int var_7 = 3120783318U;
unsigned long long int var_8 = 14353991912519867084ULL;
unsigned short var_12 = (unsigned short)43256;
signed char var_14 = (signed char)-80;
int zero = 0;
unsigned char var_19 = (unsigned char)174;
short var_20 = (short)-14211;
unsigned char var_21 = (unsigned char)250;
long long int var_22 = -3741955817274660027LL;
unsigned char var_23 = (unsigned char)144;
short var_24 = (short)19766;
unsigned int arr_0 [19] [19] ;
unsigned int arr_1 [19] ;
int arr_2 [19] [19] [19] ;
long long int arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 2840468795U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 1754931203U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1766732559 : 932195720;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = -4107866961399686752LL;
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
