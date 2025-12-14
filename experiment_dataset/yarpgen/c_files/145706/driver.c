#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21512;
unsigned short var_3 = (unsigned short)1462;
long long int var_4 = 1619606037137536129LL;
long long int var_5 = 42616483307848853LL;
short var_9 = (short)24325;
int zero = 0;
int var_10 = -1411863823;
short var_11 = (short)1257;
unsigned short var_12 = (unsigned short)27027;
unsigned int var_13 = 1851714272U;
unsigned long long int var_14 = 15323453109120838005ULL;
short var_15 = (short)-1549;
long long int arr_2 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = -7027073878978167031LL;
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
