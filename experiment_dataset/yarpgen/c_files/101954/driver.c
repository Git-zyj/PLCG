#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15529769052336389918ULL;
unsigned int var_1 = 3526133746U;
int var_2 = -915477537;
int var_3 = -2077892544;
unsigned long long int var_4 = 5347269255675548090ULL;
signed char var_5 = (signed char)41;
unsigned int var_6 = 2653282695U;
signed char var_8 = (signed char)-90;
unsigned long long int var_10 = 5684147908584502904ULL;
int zero = 0;
unsigned long long int var_11 = 12593228691714545699ULL;
unsigned long long int var_12 = 8607977480887282155ULL;
long long int var_13 = 4055509651729814503LL;
int var_14 = 2099772333;
long long int var_15 = -4126143753881682062LL;
unsigned long long int var_16 = 12000962499959316596ULL;
unsigned long long int var_17 = 2940445316178527457ULL;
signed char arr_0 [16] [16] ;
long long int arr_6 [16] [16] [16] ;
long long int arr_8 [16] [16] ;
long long int arr_11 [16] [16] [16] [16] [16] ;
unsigned long long int arr_4 [16] ;
unsigned long long int arr_23 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 8279182123517999502LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = 301141506391125746LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = -1312568969000139059LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 11019309153884067021ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1868181221687124066ULL : 13323944388314934226ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
