#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2057612762428277567LL;
short var_5 = (short)10099;
signed char var_6 = (signed char)-28;
unsigned int var_10 = 2861340890U;
signed char var_12 = (signed char)-64;
short var_14 = (short)-3173;
int zero = 0;
unsigned char var_15 = (unsigned char)229;
unsigned int var_16 = 3623653608U;
unsigned long long int var_17 = 9895745790477450956ULL;
int var_18 = -1864213065;
unsigned char var_19 = (unsigned char)123;
unsigned long long int var_20 = 2872704126127485225ULL;
short arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)203;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
