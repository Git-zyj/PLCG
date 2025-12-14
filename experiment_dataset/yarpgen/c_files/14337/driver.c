#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18323;
short var_10 = (short)5442;
unsigned int var_11 = 1350983624U;
signed char var_12 = (signed char)-55;
int zero = 0;
unsigned short var_14 = (unsigned short)39647;
unsigned char var_15 = (unsigned char)217;
unsigned short var_16 = (unsigned short)58652;
unsigned int var_17 = 1678494067U;
unsigned int arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 953928907U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
