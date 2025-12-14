#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 540527161282978890ULL;
int var_2 = 1546557354;
signed char var_3 = (signed char)15;
unsigned long long int var_4 = 9096569260435295980ULL;
short var_7 = (short)4021;
signed char var_8 = (signed char)31;
short var_10 = (short)-16596;
unsigned int var_11 = 1781704404U;
_Bool var_14 = (_Bool)1;
unsigned int var_16 = 1068793553U;
unsigned long long int var_17 = 1346044514159912785ULL;
int var_18 = 620376133;
int zero = 0;
int var_19 = -961896904;
unsigned int var_20 = 1520030775U;
unsigned int var_21 = 1584534414U;
signed char var_22 = (signed char)-121;
unsigned int var_23 = 698468402U;
unsigned int arr_0 [15] ;
signed char arr_1 [15] ;
int arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 2640358041U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 1714824487;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
