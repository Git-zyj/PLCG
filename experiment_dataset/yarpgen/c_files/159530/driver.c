#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1168731241;
short var_4 = (short)-14312;
short var_5 = (short)8515;
short var_6 = (short)4138;
unsigned long long int var_7 = 4318606355563344041ULL;
unsigned long long int var_9 = 489344330173167101ULL;
signed char var_10 = (signed char)110;
unsigned long long int var_13 = 12131865931148577806ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)18540;
long long int var_19 = -7264088558040351137LL;
unsigned short var_20 = (unsigned short)40711;
_Bool var_21 = (_Bool)1;
short arr_0 [15] ;
_Bool arr_1 [15] ;
short arr_2 [18] ;
_Bool arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)8844;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)-10492;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
