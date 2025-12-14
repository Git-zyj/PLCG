#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)13;
long long int var_2 = 685075439084643743LL;
short var_3 = (short)11025;
long long int var_5 = -1543344051125283078LL;
_Bool var_6 = (_Bool)1;
int var_10 = 1014798204;
short var_11 = (short)18825;
unsigned int var_12 = 3310000741U;
int var_13 = 1400594621;
signed char var_14 = (signed char)-93;
short var_15 = (short)-12032;
short var_17 = (short)2670;
int zero = 0;
short var_18 = (short)-15026;
int var_19 = -2097669533;
int var_20 = 306418566;
unsigned int var_21 = 2007226895U;
unsigned long long int var_22 = 10665939297657668093ULL;
unsigned long long int arr_0 [19] [19] ;
int arr_1 [19] [19] ;
long long int arr_2 [19] [19] ;
unsigned short arr_3 [19] ;
unsigned long long int arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 6910458198498872553ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = -1485860889;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 8787911423257193268LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)21129;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 4189381163720853470ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
