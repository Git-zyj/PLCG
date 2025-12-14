#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3376126603U;
long long int var_4 = -4731489564977103597LL;
int var_5 = 845805351;
unsigned short var_9 = (unsigned short)26043;
unsigned int var_11 = 2466978346U;
unsigned int var_13 = 4160275611U;
unsigned int var_15 = 3666823164U;
int zero = 0;
int var_16 = 1285636908;
short var_17 = (short)2779;
int var_18 = 1207833479;
unsigned long long int var_19 = 12457201729975594240ULL;
unsigned short arr_2 [21] ;
short arr_9 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)10504;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-20586 : (short)28188;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
