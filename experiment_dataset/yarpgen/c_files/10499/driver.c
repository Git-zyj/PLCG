#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)5;
unsigned int var_7 = 29511539U;
short var_11 = (short)-704;
unsigned long long int var_12 = 13817888406510326548ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-21774;
int var_16 = 1683688130;
unsigned int var_17 = 1793770969U;
unsigned char var_18 = (unsigned char)181;
signed char var_19 = (signed char)124;
int arr_2 [20] ;
unsigned long long int arr_4 [20] ;
int arr_6 [11] ;
unsigned long long int arr_8 [11] [11] ;
unsigned int arr_12 [11] [11] [11] ;
long long int arr_13 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = -299215606;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 16212879562184394111ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 584270573 : 752530727;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = 6505503133087130442ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1895755593U : 1622593558U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -7097103655710789453LL;
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
