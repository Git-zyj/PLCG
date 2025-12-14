#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8901144119246667531LL;
unsigned int var_1 = 2016308654U;
int var_3 = 2119966474;
unsigned char var_4 = (unsigned char)25;
signed char var_6 = (signed char)-100;
int var_12 = 234042839;
long long int var_13 = -6339545522452083344LL;
int zero = 0;
short var_15 = (short)-29094;
_Bool var_16 = (_Bool)1;
long long int var_17 = 6351569809567662472LL;
unsigned char var_18 = (unsigned char)188;
signed char arr_0 [12] [12] ;
unsigned char arr_2 [12] ;
int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-117;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = -426498488;
}

void checksum() {
    hash(&seed, var_15);
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
