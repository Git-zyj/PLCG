#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 207382474006036452ULL;
short var_4 = (short)-5825;
signed char var_8 = (signed char)106;
unsigned long long int var_10 = 5857911310301768737ULL;
unsigned long long int var_14 = 10215253647028333555ULL;
int zero = 0;
unsigned int var_15 = 3703386817U;
unsigned short var_16 = (unsigned short)19445;
int var_17 = -1190146342;
unsigned long long int var_18 = 14549017088348052839ULL;
unsigned long long int var_19 = 9726363505012348394ULL;
signed char arr_0 [20] [20] ;
unsigned int arr_1 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-86;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 212943955U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
