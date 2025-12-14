#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23620;
short var_1 = (short)-10787;
unsigned long long int var_7 = 12263360391177025912ULL;
short var_9 = (short)20651;
unsigned int var_10 = 2896798830U;
unsigned long long int var_13 = 15570881949401761575ULL;
short var_14 = (short)-17861;
int zero = 0;
signed char var_16 = (signed char)-26;
unsigned long long int var_17 = 17451635739832738021ULL;
unsigned short var_18 = (unsigned short)3847;
short var_19 = (short)-19545;
unsigned long long int var_20 = 13626133912950569262ULL;
int arr_0 [10] ;
signed char arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 1649987378;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)92;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
