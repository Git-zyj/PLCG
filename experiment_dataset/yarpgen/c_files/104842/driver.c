#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1129351738;
int var_1 = -1135207688;
unsigned long long int var_4 = 2040567292869915641ULL;
int var_5 = -1006982298;
int var_6 = -1423107327;
unsigned long long int var_7 = 3369488517069228510ULL;
signed char var_8 = (signed char)-9;
int zero = 0;
short var_15 = (short)1757;
unsigned char var_16 = (unsigned char)245;
unsigned char var_17 = (unsigned char)156;
short var_18 = (short)-20597;
unsigned int var_19 = 1567178918U;
unsigned short var_20 = (unsigned short)3773;
unsigned int arr_1 [12] [12] ;
long long int arr_2 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 2740175809U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1719445387636024719LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
