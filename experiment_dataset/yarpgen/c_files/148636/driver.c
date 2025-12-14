#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = 1900507074;
short var_4 = (short)19737;
unsigned char var_8 = (unsigned char)188;
unsigned short var_10 = (unsigned short)58002;
unsigned long long int var_11 = 2167755814745057143ULL;
int zero = 0;
unsigned int var_12 = 3314459385U;
unsigned int var_13 = 550920695U;
short var_14 = (short)16408;
signed char var_15 = (signed char)78;
short var_16 = (short)28144;
signed char arr_3 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)19;
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
