#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)23214;
short var_5 = (short)-15509;
unsigned long long int var_14 = 12355630047133125990ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)55182;
int var_21 = -693694181;
signed char var_22 = (signed char)21;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)14536;
int arr_0 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1686417012;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
