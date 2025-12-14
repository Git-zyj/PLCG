#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2149783549409621025LL;
unsigned long long int var_11 = 3736102644157721388ULL;
int zero = 0;
unsigned long long int var_13 = 14462764904191833855ULL;
long long int var_14 = 1152119880200493481LL;
int var_15 = 382061896;
unsigned short var_16 = (unsigned short)12733;
int var_17 = -630636251;
int arr_0 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = -269548132;
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
