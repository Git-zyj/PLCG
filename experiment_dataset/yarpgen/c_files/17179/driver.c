#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 301835340U;
long long int var_2 = 9088765731488068919LL;
long long int var_5 = 1601917239554444491LL;
unsigned int var_7 = 385574736U;
int var_10 = 1581031337;
int var_12 = 63662406;
long long int var_13 = -2784048439078859202LL;
int zero = 0;
unsigned int var_16 = 2284709816U;
unsigned long long int var_17 = 1159482372778719333ULL;
unsigned int var_18 = 3193744079U;
int var_19 = 322233294;
int var_20 = -1566603114;
unsigned char var_21 = (unsigned char)201;
long long int var_22 = 8643031575331560899LL;
int var_23 = 1514498861;
int var_24 = -1069804545;
int arr_0 [24] [24] ;
int arr_1 [24] [24] ;
unsigned char arr_3 [24] ;
int arr_4 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 115266999;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = -700470636;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 44576238;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
