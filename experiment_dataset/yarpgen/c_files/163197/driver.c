#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38042;
unsigned short var_2 = (unsigned short)33160;
_Bool var_3 = (_Bool)0;
unsigned long long int var_7 = 15157023215137453223ULL;
unsigned int var_8 = 2703660428U;
unsigned int var_9 = 283667660U;
long long int var_12 = -5899180866396663518LL;
int zero = 0;
signed char var_16 = (signed char)-3;
int var_17 = 265997080;
int var_18 = -1154347582;
unsigned int var_19 = 4262727120U;
int var_20 = 425640991;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)32;
_Bool var_24 = (_Bool)0;
unsigned short var_25 = (unsigned short)37872;
_Bool var_26 = (_Bool)0;
short arr_4 [16] ;
short arr_7 [19] ;
unsigned short arr_8 [19] [19] ;
unsigned int arr_12 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (short)7309;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (short)14678;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)23193;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = 160127853U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
