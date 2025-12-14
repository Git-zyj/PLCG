#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29263;
signed char var_3 = (signed char)86;
unsigned char var_10 = (unsigned char)123;
unsigned int var_11 = 2087349421U;
int zero = 0;
unsigned char var_13 = (unsigned char)61;
unsigned short var_14 = (unsigned short)35367;
unsigned short var_15 = (unsigned short)41388;
int var_16 = -1263126653;
unsigned int var_17 = 3172619853U;
_Bool var_18 = (_Bool)1;
unsigned short arr_1 [25] ;
short arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned short)22526;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-9596 : (short)31487;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
