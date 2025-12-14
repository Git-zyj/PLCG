#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9897035296022555986ULL;
short var_1 = (short)-23662;
int var_2 = 752290336;
unsigned short var_4 = (unsigned short)29172;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-104;
int var_8 = 1851821429;
unsigned short var_9 = (unsigned short)5799;
int zero = 0;
unsigned long long int var_10 = 5491380888489368917ULL;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-26371;
int var_13 = -670454829;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 5627185047182400433ULL;
int var_16 = 2141863135;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 9578124696425090398ULL;
short var_19 = (short)-15407;
int arr_0 [23] ;
unsigned long long int arr_1 [23] ;
int arr_3 [23] [23] ;
unsigned long long int arr_4 [23] [23] [23] ;
int arr_15 [23] [23] ;
unsigned short arr_16 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 402815071 : -292875480;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 1974029073047694141ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 1840327484;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 6648592396988243994ULL : 16489039210638187348ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? -2115780275 : 923521122;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)2679 : (unsigned short)24614;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
