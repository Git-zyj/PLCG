#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15324937367705951684ULL;
long long int var_1 = 8508760398845449883LL;
long long int var_2 = -7738473979275721856LL;
short var_3 = (short)-21436;
unsigned long long int var_7 = 5077067301571129764ULL;
int zero = 0;
unsigned int var_10 = 166068313U;
unsigned short var_11 = (unsigned short)21491;
unsigned short var_12 = (unsigned short)63132;
short var_13 = (short)-4280;
int var_14 = -1333624740;
unsigned int var_15 = 4282224081U;
int arr_0 [21] ;
unsigned long long int arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -1716665139;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 17754645051430041403ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
