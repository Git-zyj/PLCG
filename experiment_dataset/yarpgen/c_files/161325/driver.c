#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)43243;
unsigned int var_3 = 2893690698U;
long long int var_4 = -8031158417749453723LL;
long long int var_6 = -6930581047001021321LL;
unsigned short var_7 = (unsigned short)19182;
long long int var_8 = 2412756344505104424LL;
int var_9 = -1060527431;
int var_10 = -1417414217;
unsigned char var_11 = (unsigned char)122;
int zero = 0;
long long int var_13 = -8772787435669446772LL;
unsigned char var_14 = (unsigned char)117;
unsigned char var_15 = (unsigned char)41;
unsigned char var_16 = (unsigned char)238;
short var_17 = (short)-23843;
short var_18 = (short)10310;
short var_19 = (short)1261;
long long int var_20 = -3929522412779949258LL;
int var_21 = 299106130;
short var_22 = (short)-25533;
unsigned char arr_0 [14] [14] ;
unsigned long long int arr_2 [14] [14] ;
long long int arr_4 [14] [14] [14] ;
unsigned int arr_9 [21] ;
unsigned long long int arr_10 [21] ;
unsigned short arr_11 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 8893126604525075722ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -3264354037969051800LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 1828030492U : 1148719362U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 2143752589419016618ULL : 1680610904006220477ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)63354;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
