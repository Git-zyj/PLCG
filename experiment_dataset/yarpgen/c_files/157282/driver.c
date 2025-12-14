#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3700;
signed char var_1 = (signed char)-9;
unsigned int var_2 = 2261559490U;
int var_3 = -421275828;
unsigned long long int var_4 = 16353695266527267823ULL;
unsigned long long int var_5 = 10457877761339549190ULL;
int var_7 = 1043646062;
signed char var_8 = (signed char)-9;
int var_9 = 1239605756;
unsigned int var_10 = 2621778468U;
int zero = 0;
unsigned long long int var_11 = 13108887391093613051ULL;
short var_12 = (short)17528;
unsigned short var_13 = (unsigned short)45332;
int var_14 = 579347553;
unsigned long long int var_15 = 6527935737813768850ULL;
short var_16 = (short)17428;
unsigned int arr_0 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 2040118405U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
