#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15805;
int var_3 = -696741691;
long long int var_7 = 1000397319248290933LL;
unsigned char var_9 = (unsigned char)125;
int zero = 0;
unsigned long long int var_12 = 1569882908877148735ULL;
signed char var_13 = (signed char)-62;
unsigned char var_14 = (unsigned char)244;
unsigned char var_15 = (unsigned char)210;
signed char var_16 = (signed char)4;
signed char arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-53 : (signed char)98;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
