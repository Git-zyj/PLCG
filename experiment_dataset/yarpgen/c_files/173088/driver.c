#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9102220282310074352ULL;
short var_4 = (short)-16748;
short var_6 = (short)-18574;
unsigned short var_8 = (unsigned short)46346;
short var_12 = (short)-21131;
int zero = 0;
unsigned short var_13 = (unsigned short)55877;
unsigned short var_14 = (unsigned short)10420;
short var_15 = (short)1709;
int var_16 = -953258343;
unsigned int arr_0 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 654124140U;
}

void checksum() {
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
