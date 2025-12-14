#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-25210;
unsigned char var_7 = (unsigned char)87;
long long int var_8 = -4754638096646888557LL;
short var_9 = (short)23346;
int var_10 = 1297748988;
short var_11 = (short)28037;
int var_14 = 254744747;
int zero = 0;
unsigned int var_16 = 2245208099U;
long long int var_17 = 8094925627796304343LL;
long long int var_18 = 6376345560733865410LL;
signed char var_19 = (signed char)21;
long long int var_20 = -748290260012738279LL;
short arr_15 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (short)-11131 : (short)20875;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
