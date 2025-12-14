#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)213;
int var_4 = -1164232520;
int var_6 = 70656576;
short var_9 = (short)32516;
int var_10 = -2141742840;
int var_15 = 1434913990;
int zero = 0;
int var_18 = -135570967;
unsigned short var_19 = (unsigned short)36225;
unsigned short var_20 = (unsigned short)50705;
int var_21 = -1888258887;
unsigned short var_22 = (unsigned short)27233;
short arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)3948;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
