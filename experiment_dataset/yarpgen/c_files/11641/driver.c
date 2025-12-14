#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2649804004U;
int var_2 = -422753457;
int var_4 = 1433340879;
long long int var_5 = -3074124362551514413LL;
signed char var_10 = (signed char)-93;
int zero = 0;
int var_13 = -1954085142;
short var_14 = (short)16552;
unsigned long long int var_15 = 17666518876810778914ULL;
long long int var_16 = 7791055634993758482LL;
long long int var_17 = 2311030884285963899LL;
int var_18 = 1589058462;
short var_19 = (short)-20813;
unsigned char arr_1 [11] [11] ;
_Bool arr_4 [23] [23] ;
long long int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -3551861204282462774LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
