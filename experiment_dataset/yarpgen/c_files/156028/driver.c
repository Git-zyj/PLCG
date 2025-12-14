#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16166;
int var_1 = 2041074459;
short var_3 = (short)-25328;
int var_6 = 601794557;
signed char var_7 = (signed char)-107;
unsigned int var_8 = 969693048U;
long long int var_10 = 4114068120869928646LL;
unsigned long long int var_12 = 5753953758273762500ULL;
int zero = 0;
unsigned long long int var_13 = 5377288809602938828ULL;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 617473224U;
short var_16 = (short)-30853;
unsigned short var_17 = (unsigned short)63550;
short var_18 = (short)-21824;
int var_19 = -2099255180;
unsigned int arr_1 [17] ;
unsigned long long int arr_2 [17] [17] [17] ;
int arr_3 [17] [17] [17] ;
long long int arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 1262966571U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 11756098362571752543ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2025545908;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 6810294130639341443LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
