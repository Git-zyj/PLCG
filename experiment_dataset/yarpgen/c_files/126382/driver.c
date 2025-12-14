#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1702573667;
int var_2 = -1356125174;
long long int var_3 = 3382229565590368437LL;
unsigned char var_4 = (unsigned char)182;
unsigned int var_7 = 1496633328U;
long long int var_9 = 5820996158542866238LL;
unsigned short var_11 = (unsigned short)42759;
long long int var_12 = 7618561497114690692LL;
int zero = 0;
long long int var_14 = 7981149491222054800LL;
int var_15 = -46602218;
short var_16 = (short)-15547;
int var_17 = 1808452549;
unsigned int var_18 = 3750753338U;
long long int var_19 = -7621813964652257270LL;
short var_20 = (short)-28378;
unsigned short var_21 = (unsigned short)64403;
long long int arr_2 [17] ;
long long int arr_7 [25] ;
long long int arr_10 [24] ;
int arr_14 [16] ;
signed char arr_15 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 5520100528450351484LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = -6099224974242694383LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = -3734937263913920419LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = -1787422103;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_15 [i_0] = (signed char)-70;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
