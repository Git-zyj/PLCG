#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31875;
unsigned char var_2 = (unsigned char)107;
unsigned char var_3 = (unsigned char)51;
unsigned int var_4 = 4184246415U;
unsigned char var_5 = (unsigned char)190;
unsigned int var_9 = 3895804877U;
int var_10 = -423447093;
int var_11 = -1985918208;
short var_14 = (short)28837;
short var_15 = (short)-22584;
int zero = 0;
unsigned int var_16 = 423452605U;
long long int var_17 = -3230981975765440168LL;
unsigned int var_18 = 3616441559U;
unsigned int var_19 = 3325819404U;
int var_20 = 194996298;
unsigned long long int var_21 = 17739752063350054651ULL;
short var_22 = (short)1821;
unsigned int arr_1 [21] ;
unsigned int arr_2 [21] [21] ;
unsigned int arr_3 [16] ;
short arr_5 [16] [16] ;
short arr_10 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 289253257U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 1705597682U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 809957394U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-24762;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)5034;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
