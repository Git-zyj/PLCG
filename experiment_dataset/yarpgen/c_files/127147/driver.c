#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51000;
unsigned long long int var_1 = 14447462916157457544ULL;
unsigned long long int var_6 = 17616670972914242590ULL;
unsigned long long int var_7 = 16063923708554032774ULL;
signed char var_8 = (signed char)76;
unsigned char var_9 = (unsigned char)147;
unsigned short var_10 = (unsigned short)55653;
unsigned long long int var_11 = 15084684650076042082ULL;
int zero = 0;
unsigned long long int var_13 = 17670174125771094352ULL;
unsigned long long int var_14 = 8094672064022075466ULL;
unsigned long long int var_15 = 6963851933509195546ULL;
signed char var_16 = (signed char)3;
unsigned short var_17 = (unsigned short)40170;
unsigned short arr_1 [21] ;
unsigned int arr_2 [21] [21] [21] ;
int arr_3 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)25463;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1839922745U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 482286726;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
