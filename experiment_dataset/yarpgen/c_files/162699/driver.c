#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28168;
short var_4 = (short)17440;
int var_5 = 161607597;
unsigned long long int var_8 = 12130717029150121446ULL;
unsigned long long int var_9 = 7511366712637062727ULL;
unsigned long long int var_10 = 9181184045733791462ULL;
int zero = 0;
short var_11 = (short)-18410;
short var_12 = (short)19601;
unsigned long long int var_13 = 6625888923852828715ULL;
unsigned long long int var_14 = 2047326328828173988ULL;
int var_15 = 431298760;
int arr_10 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = -2057274663;
}

void checksum() {
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
