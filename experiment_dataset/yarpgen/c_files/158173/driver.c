#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10532529148479213089ULL;
int var_5 = 148545869;
unsigned int var_6 = 3113681922U;
unsigned char var_12 = (unsigned char)73;
long long int var_18 = -2740462189194059801LL;
int zero = 0;
signed char var_20 = (signed char)84;
signed char var_21 = (signed char)-104;
signed char var_22 = (signed char)-80;
int var_23 = 1383225094;
int var_24 = -705103275;
unsigned short var_25 = (unsigned short)39262;
unsigned char var_26 = (unsigned char)109;
unsigned char var_27 = (unsigned char)224;
signed char var_28 = (signed char)49;
signed char var_29 = (signed char)31;
short arr_0 [24] ;
unsigned char arr_1 [24] [24] ;
unsigned int arr_2 [24] [24] ;
unsigned short arr_3 [24] ;
long long int arr_4 [24] ;
int arr_5 [24] [24] [24] ;
unsigned char arr_7 [24] ;
_Bool arr_8 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)-17067;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)38 : (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 514718655U : 1392464595U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)42850;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -8533873582472420167LL : -340568690005593358LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -3062394;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
