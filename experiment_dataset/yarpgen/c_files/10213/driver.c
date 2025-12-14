#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1015455495U;
long long int var_4 = 3473006120230719490LL;
int var_5 = -1956195712;
long long int var_6 = 1852729079471222025LL;
int var_7 = 1316669319;
unsigned short var_8 = (unsigned short)32146;
long long int var_10 = 6851200968080306193LL;
unsigned int var_12 = 3648551598U;
unsigned short var_13 = (unsigned short)7755;
signed char var_14 = (signed char)32;
unsigned int var_15 = 423960669U;
int zero = 0;
int var_17 = 998979821;
int var_18 = -2102119568;
short var_19 = (short)-22591;
unsigned char var_20 = (unsigned char)66;
short var_21 = (short)-17871;
_Bool arr_1 [25] ;
int arr_2 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 1800783571;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
