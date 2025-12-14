#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-19594;
unsigned char var_4 = (unsigned char)54;
_Bool var_6 = (_Bool)1;
unsigned int var_11 = 518141991U;
int zero = 0;
unsigned char var_13 = (unsigned char)255;
unsigned char var_14 = (unsigned char)248;
unsigned char var_15 = (unsigned char)168;
int var_16 = 126663481;
unsigned int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 1969168772U;
}

void checksum() {
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
