#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)27867;
unsigned short var_8 = (unsigned short)55146;
unsigned long long int var_10 = 5160058452007462567ULL;
int zero = 0;
unsigned long long int var_12 = 7283359368027428128ULL;
signed char var_13 = (signed char)119;
unsigned long long int var_14 = 3806763312796585791ULL;
unsigned short var_15 = (unsigned short)6908;
unsigned short var_16 = (unsigned short)13968;
unsigned short arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)43382;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
