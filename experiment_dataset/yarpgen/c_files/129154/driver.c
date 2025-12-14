#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2698255370U;
int var_5 = 1345783769;
_Bool var_7 = (_Bool)0;
int var_8 = 1093200849;
long long int var_10 = -6064199796966794517LL;
unsigned int var_14 = 287866582U;
unsigned char var_15 = (unsigned char)72;
unsigned long long int var_17 = 10731134856211237397ULL;
unsigned int var_18 = 2109882131U;
signed char var_19 = (signed char)37;
int zero = 0;
unsigned char var_20 = (unsigned char)199;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 13506251494773769609ULL;
_Bool var_23 = (_Bool)1;
int var_24 = -1167684078;
unsigned long long int var_25 = 1589377402998222286ULL;
long long int var_26 = 1808563274224622217LL;
int arr_0 [16] [16] ;
int arr_2 [16] [16] [16] ;
int arr_3 [16] [16] [16] ;
unsigned long long int arr_4 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = -1870858378;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1239605999;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -1910775503;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 13963538556189527018ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
