#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 1917160384;
int var_14 = 1111976430;
unsigned short var_16 = (unsigned short)65149;
int zero = 0;
int var_17 = -2004167002;
unsigned int var_18 = 2645745562U;
short var_19 = (short)3643;
unsigned int var_20 = 848054480U;
long long int var_21 = 5711200616271609982LL;
short arr_0 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)-16927;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
