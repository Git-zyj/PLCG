#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2079801622;
short var_2 = (short)-32014;
_Bool var_3 = (_Bool)1;
int var_4 = -206988680;
int var_5 = 1590239246;
short var_7 = (short)-12721;
unsigned int var_11 = 3213235332U;
int zero = 0;
short var_12 = (short)13553;
unsigned short var_13 = (unsigned short)20713;
signed char var_14 = (signed char)-19;
short var_15 = (short)-16663;
unsigned char var_16 = (unsigned char)97;
short var_17 = (short)-23088;
unsigned short var_18 = (unsigned short)4505;
long long int var_19 = 3832364412556912899LL;
unsigned short arr_0 [23] [23] ;
int arr_1 [23] [23] ;
unsigned short arr_6 [19] ;
int arr_2 [23] ;
int arr_7 [19] ;
int arr_8 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)14892;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 791905100;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned short)60919;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -879638727;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 2012728106;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 90084682;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
