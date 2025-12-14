#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-115;
long long int var_3 = 3665654287745891693LL;
unsigned short var_7 = (unsigned short)37254;
short var_10 = (short)-7;
unsigned char var_11 = (unsigned char)0;
short var_12 = (short)-14605;
long long int var_13 = 3669289113147713881LL;
unsigned char var_17 = (unsigned char)155;
int zero = 0;
unsigned char var_19 = (unsigned char)237;
long long int var_20 = 1649681775995009446LL;
long long int var_21 = 6745505047082891513LL;
signed char var_22 = (signed char)35;
signed char var_23 = (signed char)-119;
short var_24 = (short)20158;
unsigned char var_25 = (unsigned char)173;
unsigned int arr_0 [11] [11] ;
unsigned char arr_3 [24] ;
unsigned short arr_5 [24] [24] ;
signed char arr_6 [24] [24] [24] ;
long long int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 1087113678U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)60175 : (unsigned short)3660;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)35;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 2635503619842171999LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
