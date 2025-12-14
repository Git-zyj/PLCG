#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16223;
short var_7 = (short)-29897;
unsigned int var_8 = 3656715065U;
short var_12 = (short)21062;
short var_14 = (short)-32151;
unsigned int var_15 = 4265769089U;
int zero = 0;
short var_16 = (short)21662;
unsigned int var_17 = 1623278864U;
unsigned int var_18 = 1202929310U;
unsigned int arr_0 [24] ;
unsigned int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 1449956368U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 261512668U : 730447872U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
