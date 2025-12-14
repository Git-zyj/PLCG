#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-3443;
int var_3 = -2041549061;
int var_4 = -1436348240;
unsigned int var_7 = 1544906660U;
unsigned long long int var_8 = 1210903691374737979ULL;
short var_14 = (short)-19369;
int zero = 0;
long long int var_15 = 8466483670987412542LL;
long long int var_16 = -1255150576728297315LL;
short var_17 = (short)14416;
unsigned long long int var_18 = 8474301747532636547ULL;
int arr_10 [21] [21] [21] ;
unsigned long long int arr_9 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -214621185 : -986388271;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 12649807976769053649ULL : 14771924220039124344ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
