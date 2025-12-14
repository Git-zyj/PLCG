#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)37;
unsigned int var_5 = 1910747597U;
int var_7 = 203268449;
short var_8 = (short)15761;
unsigned int var_9 = 3898557923U;
unsigned long long int var_11 = 5048123123882108583ULL;
signed char var_12 = (signed char)25;
int zero = 0;
int var_14 = -478046658;
unsigned int var_15 = 3322400473U;
short var_16 = (short)12309;
int var_17 = 416756672;
unsigned int arr_1 [22] ;
short arr_2 [22] ;
unsigned long long int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 3199796849U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)-32546;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 12724536390460303131ULL;
}

void checksum() {
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
