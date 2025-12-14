#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1094896576U;
unsigned short var_3 = (unsigned short)10512;
unsigned long long int var_6 = 14715617600329531091ULL;
unsigned short var_7 = (unsigned short)33987;
int var_9 = 1831896114;
unsigned long long int var_11 = 4029486740854631098ULL;
short var_12 = (short)4478;
unsigned short var_13 = (unsigned short)49105;
int var_14 = -1814193604;
unsigned short var_15 = (unsigned short)32991;
unsigned long long int var_16 = 17329422174486730624ULL;
int var_17 = -1985732317;
unsigned long long int var_18 = 13410888439688266235ULL;
int zero = 0;
short var_19 = (short)-14184;
unsigned int var_20 = 163358079U;
unsigned long long int var_21 = 14850072914918206629ULL;
int var_22 = 2020126798;
int var_23 = 1122298029;
unsigned short var_24 = (unsigned short)22847;
int arr_5 [24] ;
unsigned short arr_6 [24] [24] ;
int arr_4 [11] ;
unsigned short arr_7 [24] [24] ;
signed char arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = -1184664022;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)38804;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 1424427431;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)27862;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (signed char)-52;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
