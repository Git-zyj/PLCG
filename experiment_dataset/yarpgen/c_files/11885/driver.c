#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-8218;
short var_5 = (short)24557;
unsigned long long int var_6 = 834587585713911028ULL;
unsigned short var_8 = (unsigned short)50681;
int var_11 = 2041836875;
int zero = 0;
unsigned char var_12 = (unsigned char)60;
short var_13 = (short)26490;
signed char var_14 = (signed char)-111;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 14108363523579180646ULL;
unsigned long long int var_17 = 1947168229806446389ULL;
signed char var_18 = (signed char)-41;
unsigned short var_19 = (unsigned short)4032;
short var_20 = (short)13044;
signed char var_21 = (signed char)88;
unsigned short var_22 = (unsigned short)51148;
signed char var_23 = (signed char)-47;
unsigned int var_24 = 3225676673U;
long long int arr_1 [20] [20] ;
unsigned long long int arr_2 [24] [24] ;
long long int arr_3 [24] ;
short arr_4 [24] [24] ;
unsigned int arr_5 [21] [21] ;
unsigned short arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = -592329046499098235LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 14119606707801110107ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 1852430261285278206LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (short)10029;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 3934273178U : 2290370816U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (unsigned short)25146;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
