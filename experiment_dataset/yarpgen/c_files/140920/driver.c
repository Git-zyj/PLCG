#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 2240945631U;
unsigned long long int var_3 = 16834602745538482736ULL;
long long int var_5 = -3582780850643440707LL;
unsigned short var_7 = (unsigned short)47323;
unsigned int var_15 = 1242772895U;
unsigned long long int var_16 = 11940184784042182627ULL;
int zero = 0;
signed char var_17 = (signed char)-93;
signed char var_18 = (signed char)-99;
long long int var_19 = -6525827985328410569LL;
signed char var_20 = (signed char)-1;
unsigned int arr_0 [15] ;
unsigned short arr_2 [15] ;
unsigned long long int arr_3 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 830283693U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)11083;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2678141795364333921ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
