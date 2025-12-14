#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5952522827750833161ULL;
unsigned short var_2 = (unsigned short)7040;
signed char var_3 = (signed char)-22;
int var_4 = -1504228794;
unsigned short var_7 = (unsigned short)18195;
unsigned long long int var_16 = 1227048655525965110ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)9887;
short var_18 = (short)-24760;
unsigned long long int var_19 = 14948278375284760130ULL;
signed char var_20 = (signed char)-65;
unsigned int var_21 = 719816432U;
unsigned char var_22 = (unsigned char)42;
unsigned long long int arr_1 [19] ;
unsigned short arr_2 [12] ;
unsigned short arr_5 [12] ;
int arr_6 [12] [12] ;
signed char arr_8 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 18401363559193212420ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)46305;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned short)19093;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = 1654836437;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-19 : (signed char)21;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
