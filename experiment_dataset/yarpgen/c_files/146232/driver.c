#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)28;
unsigned int var_2 = 3619416379U;
short var_3 = (short)-16959;
unsigned short var_5 = (unsigned short)11710;
short var_6 = (short)-31013;
short var_7 = (short)-13086;
unsigned int var_8 = 1020003292U;
signed char var_11 = (signed char)-59;
int zero = 0;
short var_14 = (short)-30422;
signed char var_15 = (signed char)64;
short var_16 = (short)-10632;
unsigned short var_17 = (unsigned short)55995;
signed char arr_4 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)22;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
