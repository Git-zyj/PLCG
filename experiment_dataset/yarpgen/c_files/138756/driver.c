#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6793585284189724083LL;
unsigned long long int var_2 = 17946561882235643498ULL;
int var_3 = 1815783845;
int var_10 = 1909752560;
unsigned long long int var_15 = 2090492148635214563ULL;
unsigned short var_16 = (unsigned short)6025;
unsigned int var_17 = 4291159092U;
int zero = 0;
int var_18 = 541184400;
short var_19 = (short)-2391;
unsigned short var_20 = (unsigned short)55705;
int var_21 = 556833630;
unsigned char var_22 = (unsigned char)227;
unsigned long long int var_23 = 7085406749084073697ULL;
unsigned long long int var_24 = 16501289068152715519ULL;
short var_25 = (short)29169;
short arr_3 [18] [18] ;
short arr_4 [18] [18] ;
unsigned int arr_5 [18] [18] ;
unsigned short arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (short)18245;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-2318;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = 4041320598U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned short)22924;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
