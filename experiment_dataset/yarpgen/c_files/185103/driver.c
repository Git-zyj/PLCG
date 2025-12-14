#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1360570676642500591ULL;
int var_2 = 1834147339;
short var_3 = (short)23488;
unsigned char var_4 = (unsigned char)146;
_Bool var_5 = (_Bool)0;
int var_6 = 354631663;
unsigned short var_8 = (unsigned short)38418;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)152;
int zero = 0;
unsigned int var_12 = 3702725427U;
short var_13 = (short)6978;
int var_14 = 1772623270;
short var_15 = (short)-19696;
signed char var_16 = (signed char)9;
signed char var_17 = (signed char)45;
int var_18 = 263338642;
unsigned char var_19 = (unsigned char)224;
int var_20 = 740730462;
long long int var_21 = 6205456365696780181LL;
int arr_0 [19] ;
int arr_1 [19] ;
long long int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -1790383489;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -1538472839;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -484810158981225132LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
