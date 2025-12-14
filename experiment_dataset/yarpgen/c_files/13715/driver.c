#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2274670185U;
int var_1 = 1639025136;
int var_4 = 483834119;
long long int var_6 = -7971374848136482148LL;
int var_7 = -1842305139;
int var_9 = -605361959;
unsigned long long int var_10 = 15928039699001498646ULL;
int zero = 0;
int var_11 = -1379096443;
signed char var_12 = (signed char)-68;
long long int var_13 = 7246394992681080870LL;
int var_14 = -176300475;
unsigned char var_15 = (unsigned char)44;
signed char var_16 = (signed char)-112;
signed char var_17 = (signed char)91;
short var_18 = (short)271;
int var_19 = 1986477883;
unsigned int arr_1 [16] ;
signed char arr_3 [11] ;
int arr_4 [11] ;
unsigned long long int arr_2 [16] ;
signed char arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 2430210456U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -591284816 : -1863254506;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 8073413298656249145ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)102 : (signed char)-121;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
