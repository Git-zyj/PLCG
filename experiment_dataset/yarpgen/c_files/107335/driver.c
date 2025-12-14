#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_19 = -2026123089;
int zero = 0;
unsigned char var_20 = (unsigned char)64;
unsigned char var_21 = (unsigned char)126;
short arr_2 [18] ;
unsigned short arr_3 [18] ;
int arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (short)-17262;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned short)24572;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -900854960;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
