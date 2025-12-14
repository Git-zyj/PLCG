#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4055887268U;
short var_7 = (short)8627;
int var_10 = -1692059832;
int zero = 0;
short var_16 = (short)-12893;
short var_17 = (short)20312;
long long int var_18 = 2893166301226084944LL;
signed char var_19 = (signed char)80;
int var_20 = -672182524;
signed char var_21 = (signed char)126;
unsigned int arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 3288147879U;
}

void checksum() {
    hash(&seed, var_16);
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
