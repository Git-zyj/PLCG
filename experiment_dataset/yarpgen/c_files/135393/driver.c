#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2196083524165739670ULL;
unsigned short var_1 = (unsigned short)58743;
short var_4 = (short)13819;
short var_5 = (short)20916;
long long int var_6 = -4131954756545772190LL;
short var_9 = (short)2378;
unsigned int var_10 = 1207890894U;
int var_14 = -1663024885;
unsigned char var_15 = (unsigned char)238;
int zero = 0;
unsigned int var_16 = 3735976166U;
long long int var_17 = 7022435380529641174LL;
signed char var_18 = (signed char)-64;
_Bool var_19 = (_Bool)0;
long long int var_20 = 1722234697871287468LL;
unsigned char arr_0 [15] ;
unsigned short arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)19716;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
