#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = -534119009;
short var_4 = (short)27916;
unsigned long long int var_6 = 5440489449218051494ULL;
unsigned short var_7 = (unsigned short)65377;
unsigned short var_9 = (unsigned short)46619;
unsigned char var_12 = (unsigned char)128;
unsigned short var_13 = (unsigned short)22663;
int zero = 0;
signed char var_14 = (signed char)-7;
int var_15 = -460752693;
unsigned char var_16 = (unsigned char)106;
long long int var_17 = -7476408135119621864LL;
unsigned long long int var_18 = 18189075097302523782ULL;
long long int var_19 = -8125807536991403732LL;
unsigned short var_20 = (unsigned short)20905;
int var_21 = 151583806;
unsigned char var_22 = (unsigned char)209;
signed char var_23 = (signed char)107;
unsigned long long int var_24 = 745131884640482130ULL;
unsigned long long int var_25 = 4906250656894817469ULL;
signed char var_26 = (signed char)115;
long long int var_27 = -4388233823501019782LL;
short arr_1 [24] [24] ;
unsigned int arr_3 [24] ;
unsigned short arr_5 [23] ;
unsigned char arr_7 [23] ;
unsigned short arr_9 [23] ;
signed char arr_10 [23] ;
unsigned long long int arr_11 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (short)23840;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 853878180U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned short)11476;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (unsigned short)54155;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (signed char)-27;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = 1727702001250383197ULL;
}

void checksum() {
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
