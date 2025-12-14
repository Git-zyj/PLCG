#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47063;
unsigned short var_3 = (unsigned short)12188;
signed char var_5 = (signed char)64;
int var_7 = -1755682149;
unsigned long long int var_8 = 16538936350804547833ULL;
_Bool var_9 = (_Bool)1;
unsigned short var_14 = (unsigned short)21527;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)51742;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)4573;
unsigned short var_19 = (unsigned short)46647;
signed char var_20 = (signed char)-114;
unsigned int var_21 = 1367172992U;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)103;
short var_24 = (short)-2295;
unsigned char var_25 = (unsigned char)122;
unsigned long long int arr_1 [22] [22] ;
signed char arr_2 [22] [22] ;
unsigned int arr_6 [22] [22] ;
signed char arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 11822058623818915048ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = 4044270479U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (signed char)-25;
}

void checksum() {
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
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
