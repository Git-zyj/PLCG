#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29025;
unsigned long long int var_1 = 15750222485480733825ULL;
unsigned long long int var_2 = 8428395684212025267ULL;
short var_3 = (short)16063;
unsigned char var_7 = (unsigned char)10;
long long int var_8 = 1725869007538369886LL;
unsigned char var_10 = (unsigned char)210;
unsigned char var_11 = (unsigned char)204;
int zero = 0;
short var_12 = (short)-14682;
unsigned long long int var_13 = 8988760689225105409ULL;
unsigned char var_14 = (unsigned char)20;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-18519;
_Bool var_17 = (_Bool)0;
signed char arr_1 [13] ;
unsigned long long int arr_4 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)22;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 15946150409245818982ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
