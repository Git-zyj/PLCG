#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)74;
unsigned long long int var_7 = 2629304277994915899ULL;
int var_8 = 1901995468;
unsigned char var_9 = (unsigned char)64;
short var_12 = (short)30493;
int var_14 = -1793182762;
unsigned long long int var_16 = 9094101201972165233ULL;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 14236819757518585718ULL;
unsigned char var_20 = (unsigned char)142;
unsigned short var_21 = (unsigned short)20459;
unsigned int arr_2 [14] ;
short arr_5 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 4186615255U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-2338;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
