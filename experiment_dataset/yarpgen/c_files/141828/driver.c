#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-4499;
unsigned short var_5 = (unsigned short)7680;
unsigned char var_8 = (unsigned char)156;
unsigned long long int var_10 = 6749187601576713363ULL;
unsigned int var_14 = 2186565634U;
int zero = 0;
int var_18 = -835719535;
int var_19 = 1962247860;
short var_20 = (short)-20741;
unsigned int var_21 = 2332081637U;
unsigned int var_22 = 731678794U;
unsigned long long int var_23 = 7170251410623319270ULL;
unsigned int var_24 = 2807755821U;
unsigned long long int var_25 = 8141767622386095366ULL;
unsigned int var_26 = 970063237U;
short var_27 = (short)31355;
int arr_0 [17] [17] ;
int arr_1 [17] ;
unsigned int arr_2 [17] ;
unsigned long long int arr_3 [17] ;
unsigned char arr_5 [21] [21] ;
unsigned int arr_6 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = -810296681;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 2115378229;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 570914249U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 7304526247462665056ULL : 13540682722300381719ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = 210288469U;
}

void checksum() {
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
