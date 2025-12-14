#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)24238;
long long int var_10 = 2121258868811325087LL;
int zero = 0;
unsigned short var_12 = (unsigned short)48913;
unsigned short var_13 = (unsigned short)37866;
unsigned char var_14 = (unsigned char)207;
unsigned long long int var_15 = 9775418927489245843ULL;
long long int var_16 = -4600686702149011238LL;
short var_17 = (short)13899;
signed char arr_0 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)-88;
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
