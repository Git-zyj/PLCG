#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1459539213;
unsigned long long int var_3 = 15159291899640168990ULL;
unsigned int var_9 = 4008403188U;
short var_11 = (short)20397;
int zero = 0;
int var_13 = 632860620;
int var_14 = 1052126286;
unsigned char var_15 = (unsigned char)17;
unsigned int var_16 = 2711367688U;
short var_17 = (short)-15178;
unsigned int arr_3 [10] ;
short arr_4 [10] ;
unsigned int arr_5 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 3082597819U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (short)-3629;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 797366101U;
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
