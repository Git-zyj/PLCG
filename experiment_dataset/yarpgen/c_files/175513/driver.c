#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -161451735;
short var_2 = (short)-13570;
int var_3 = 587310159;
short var_6 = (short)-6026;
long long int var_8 = 3570342299851633914LL;
unsigned int var_9 = 2412831193U;
unsigned short var_11 = (unsigned short)53643;
unsigned char var_12 = (unsigned char)35;
int zero = 0;
signed char var_14 = (signed char)81;
unsigned short var_15 = (unsigned short)23578;
unsigned int var_16 = 3647368545U;
unsigned int var_17 = 741964251U;
short arr_3 [23] ;
short arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)-25398;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (short)-10957;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
